#include "LIVMapper.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "laserMapping");             // 初始化节点
  ros::NodeHandle nh;                                // 创建节点句柄
  image_transport::ImageTransport it(nh);            // 创建图像传输实例
  LIVMapper mapper(nh);                              // 创建LIVMapper对象
  mapper.initializeSubscribersAndPublishers(nh, it); // 初始化订阅和发布
  mapper.run();                                      // 运行主循环
  return 0;
}