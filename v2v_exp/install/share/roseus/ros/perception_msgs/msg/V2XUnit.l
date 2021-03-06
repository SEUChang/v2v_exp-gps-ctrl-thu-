;; Auto-generated. Do not edit!


(when (boundp 'perception_msgs::V2XUnit)
  (if (not (find-package "PERCEPTION_MSGS"))
    (make-package "PERCEPTION_MSGS"))
  (shadow 'V2XUnit (find-package "PERCEPTION_MSGS")))
(unless (find-package "PERCEPTION_MSGS::V2XUNIT")
  (make-package "PERCEPTION_MSGS::V2XUNIT"))

(in-package "ROS")
;;//! \htmlinclude V2XUnit.msg.html


(defclass perception_msgs::V2XUnit
  :super ros::object
  :slots (_id _x _y _yaw _speed _utc_time _platoon_status _bdata0 _bdata1 _bdata2 ))

(defmethod perception_msgs::V2XUnit
  (:init
   (&key
    ((:id __id) 0)
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:yaw __yaw) 0.0)
    ((:speed __speed) 0.0)
    ((:utc_time __utc_time) 0.0)
    ((:platoon_status __platoon_status) 0)
    ((:bdata0 __bdata0) 0.0)
    ((:bdata1 __bdata1) 0.0)
    ((:bdata2 __bdata2) 0.0)
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _yaw (float __yaw))
   (setq _speed (float __speed))
   (setq _utc_time (float __utc_time))
   (setq _platoon_status (round __platoon_status))
   (setq _bdata0 (float __bdata0))
   (setq _bdata1 (float __bdata1))
   (setq _bdata2 (float __bdata2))
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:yaw
   (&optional __yaw)
   (if __yaw (setq _yaw __yaw)) _yaw)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:utc_time
   (&optional __utc_time)
   (if __utc_time (setq _utc_time __utc_time)) _utc_time)
  (:platoon_status
   (&optional __platoon_status)
   (if __platoon_status (setq _platoon_status __platoon_status)) _platoon_status)
  (:bdata0
   (&optional __bdata0)
   (if __bdata0 (setq _bdata0 __bdata0)) _bdata0)
  (:bdata1
   (&optional __bdata1)
   (if __bdata1 (setq _bdata1 __bdata1)) _bdata1)
  (:bdata2
   (&optional __bdata2)
   (if __bdata2 (setq _bdata2 __bdata2)) _bdata2)
  (:serialization-length
   ()
   (+
    ;; int32 _id
    4
    ;; float32 _x
    4
    ;; float32 _y
    4
    ;; float32 _yaw
    4
    ;; float32 _speed
    4
    ;; float32 _utc_time
    4
    ;; uint32 _platoon_status
    4
    ;; float32 _bdata0
    4
    ;; float32 _bdata1
    4
    ;; float32 _bdata2
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _id
       (write-long _id s)
     ;; float32 _x
       (sys::poke _x (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _y
       (sys::poke _y (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _yaw
       (sys::poke _yaw (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _speed
       (sys::poke _speed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _utc_time
       (sys::poke _utc_time (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint32 _platoon_status
       (write-long _platoon_status s)
     ;; float32 _bdata0
       (sys::poke _bdata0 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _bdata1
       (sys::poke _bdata1 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _bdata2
       (sys::poke _bdata2 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _id
     (setq _id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _x
     (setq _x (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _y
     (setq _y (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _yaw
     (setq _yaw (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _speed
     (setq _speed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _utc_time
     (setq _utc_time (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint32 _platoon_status
     (setq _platoon_status (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _bdata0
     (setq _bdata0 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _bdata1
     (setq _bdata1 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _bdata2
     (setq _bdata2 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get perception_msgs::V2XUnit :md5sum-) "45bc168a1e84404a48fc0ed86b72e629")
(setf (get perception_msgs::V2XUnit :datatype-) "perception_msgs/V2XUnit")
(setf (get perception_msgs::V2XUnit :definition-)
      "


#std_msgs/String info_id
int32  id
float32 x
float32 y
float32 yaw
float32 speed
float32 utc_time
uint32 platoon_status
##----------------------
float32 bdata0
float32 bdata1
float32 bdata2


")



(provide :perception_msgs/V2XUnit "45bc168a1e84404a48fc0ed86b72e629")


