1. 订阅ROS图片消息并保存到本地
roslaunch image_saver image_saver.launch 

@param image_topic 话题名称
@param image_path 保存路径
@param use_trigger 是否使用外部触发保存


2. 如果使用外部触发保存，许额外启动触发节点
rosrun image_saver save_image_trigger 5  参数为触发频率

3. 打开摄像头并保存图像到本地
roslaunch image_saver getAndSave.launch 

@arg path 保存路径
@arg fps 帧率 
@param use_trigger 是否使用外部触发保存

