; Auto-generated. Do not edit!


(cl:in-package common_msgs-srv)


;//! \htmlinclude TranslateCoordinate-request.msg.html

(cl:defclass <TranslateCoordinate-request> (roslisp-msg-protocol:ros-message)
  ((originx
    :reader originx
    :initarg :originx
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (originy
    :reader originy
    :initarg :originy
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass TranslateCoordinate-request (<TranslateCoordinate-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TranslateCoordinate-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TranslateCoordinate-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name common_msgs-srv:<TranslateCoordinate-request> is deprecated: use common_msgs-srv:TranslateCoordinate-request instead.")))

(cl:ensure-generic-function 'originx-val :lambda-list '(m))
(cl:defmethod originx-val ((m <TranslateCoordinate-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader common_msgs-srv:originx-val is deprecated.  Use common_msgs-srv:originx instead.")
  (originx m))

(cl:ensure-generic-function 'originy-val :lambda-list '(m))
(cl:defmethod originy-val ((m <TranslateCoordinate-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader common_msgs-srv:originy-val is deprecated.  Use common_msgs-srv:originy instead.")
  (originy m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TranslateCoordinate-request>) ostream)
  "Serializes a message object of type '<TranslateCoordinate-request>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'originx))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'originx))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'originy))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'originy))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TranslateCoordinate-request>) istream)
  "Deserializes a message object of type '<TranslateCoordinate-request>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'originx) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'originx)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'originy) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'originy)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TranslateCoordinate-request>)))
  "Returns string type for a service object of type '<TranslateCoordinate-request>"
  "common_msgs/TranslateCoordinateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TranslateCoordinate-request)))
  "Returns string type for a service object of type 'TranslateCoordinate-request"
  "common_msgs/TranslateCoordinateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TranslateCoordinate-request>)))
  "Returns md5sum for a message object of type '<TranslateCoordinate-request>"
  "2c886e6e452bf022836f0a1ebec240f3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TranslateCoordinate-request)))
  "Returns md5sum for a message object of type 'TranslateCoordinate-request"
  "2c886e6e452bf022836f0a1ebec240f3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TranslateCoordinate-request>)))
  "Returns full string definition for message of type '<TranslateCoordinate-request>"
  (cl:format cl:nil "float64[] originx~%float64[] originy~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TranslateCoordinate-request)))
  "Returns full string definition for message of type 'TranslateCoordinate-request"
  (cl:format cl:nil "float64[] originx~%float64[] originy~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TranslateCoordinate-request>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'originx) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'originy) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TranslateCoordinate-request>))
  "Converts a ROS message object to a list"
  (cl:list 'TranslateCoordinate-request
    (cl:cons ':originx (originx msg))
    (cl:cons ':originy (originy msg))
))
;//! \htmlinclude TranslateCoordinate-response.msg.html

(cl:defclass <TranslateCoordinate-response> (roslisp-msg-protocol:ros-message)
  ((resultx
    :reader resultx
    :initarg :resultx
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (resulty
    :reader resulty
    :initarg :resulty
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass TranslateCoordinate-response (<TranslateCoordinate-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TranslateCoordinate-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TranslateCoordinate-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name common_msgs-srv:<TranslateCoordinate-response> is deprecated: use common_msgs-srv:TranslateCoordinate-response instead.")))

(cl:ensure-generic-function 'resultx-val :lambda-list '(m))
(cl:defmethod resultx-val ((m <TranslateCoordinate-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader common_msgs-srv:resultx-val is deprecated.  Use common_msgs-srv:resultx instead.")
  (resultx m))

(cl:ensure-generic-function 'resulty-val :lambda-list '(m))
(cl:defmethod resulty-val ((m <TranslateCoordinate-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader common_msgs-srv:resulty-val is deprecated.  Use common_msgs-srv:resulty instead.")
  (resulty m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TranslateCoordinate-response>) ostream)
  "Serializes a message object of type '<TranslateCoordinate-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'resultx))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'resultx))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'resulty))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'resulty))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TranslateCoordinate-response>) istream)
  "Deserializes a message object of type '<TranslateCoordinate-response>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'resultx) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'resultx)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'resulty) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'resulty)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TranslateCoordinate-response>)))
  "Returns string type for a service object of type '<TranslateCoordinate-response>"
  "common_msgs/TranslateCoordinateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TranslateCoordinate-response)))
  "Returns string type for a service object of type 'TranslateCoordinate-response"
  "common_msgs/TranslateCoordinateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TranslateCoordinate-response>)))
  "Returns md5sum for a message object of type '<TranslateCoordinate-response>"
  "2c886e6e452bf022836f0a1ebec240f3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TranslateCoordinate-response)))
  "Returns md5sum for a message object of type 'TranslateCoordinate-response"
  "2c886e6e452bf022836f0a1ebec240f3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TranslateCoordinate-response>)))
  "Returns full string definition for message of type '<TranslateCoordinate-response>"
  (cl:format cl:nil "float64[] resultx~%float64[] resulty~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TranslateCoordinate-response)))
  "Returns full string definition for message of type 'TranslateCoordinate-response"
  (cl:format cl:nil "float64[] resultx~%float64[] resulty~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TranslateCoordinate-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'resultx) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'resulty) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TranslateCoordinate-response>))
  "Converts a ROS message object to a list"
  (cl:list 'TranslateCoordinate-response
    (cl:cons ':resultx (resultx msg))
    (cl:cons ':resulty (resulty msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'TranslateCoordinate)))
  'TranslateCoordinate-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'TranslateCoordinate)))
  'TranslateCoordinate-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TranslateCoordinate)))
  "Returns string type for a service object of type '<TranslateCoordinate>"
  "common_msgs/TranslateCoordinate")