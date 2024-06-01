// Auto-generated. Do not edit!

// (in-package scripts.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class SickTMini {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.status_of_camera = null;
      this.left_corners = null;
      this.right_corners = null;
      this.point = null;
      this.dolly_found = null;
      this.corners_distance = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('status_of_camera')) {
        this.status_of_camera = initObj.status_of_camera
      }
      else {
        this.status_of_camera = '';
      }
      if (initObj.hasOwnProperty('left_corners')) {
        this.left_corners = initObj.left_corners
      }
      else {
        this.left_corners = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('right_corners')) {
        this.right_corners = initObj.right_corners
      }
      else {
        this.right_corners = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('point')) {
        this.point = initObj.point
      }
      else {
        this.point = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('dolly_found')) {
        this.dolly_found = initObj.dolly_found
      }
      else {
        this.dolly_found = false;
      }
      if (initObj.hasOwnProperty('corners_distance')) {
        this.corners_distance = initObj.corners_distance
      }
      else {
        this.corners_distance = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SickTMini
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [status_of_camera]
    bufferOffset = _serializer.string(obj.status_of_camera, buffer, bufferOffset);
    // Serialize message field [left_corners]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.left_corners, buffer, bufferOffset);
    // Serialize message field [right_corners]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.right_corners, buffer, bufferOffset);
    // Serialize message field [point]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.point, buffer, bufferOffset);
    // Serialize message field [dolly_found]
    bufferOffset = _serializer.bool(obj.dolly_found, buffer, bufferOffset);
    // Serialize message field [corners_distance]
    bufferOffset = _serializer.float64(obj.corners_distance, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SickTMini
    let len;
    let data = new SickTMini(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [status_of_camera]
    data.status_of_camera = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [left_corners]
    data.left_corners = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [right_corners]
    data.right_corners = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [point]
    data.point = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [dolly_found]
    data.dolly_found = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [corners_distance]
    data.corners_distance = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += _getByteLength(object.status_of_camera);
    return length + 85;
  }

  static datatype() {
    // Returns string type for a message object
    return 'scripts/SickTMini';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '76823ce0964163b2612651f126853a31';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header 
    
    string status_of_camera
    
    geometry_msgs/Vector3 left_corners
    geometry_msgs/Vector3 right_corners
    geometry_msgs/Vector3 point
    
    bool dolly_found 
    float64 corners_distance 
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SickTMini(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.status_of_camera !== undefined) {
      resolved.status_of_camera = msg.status_of_camera;
    }
    else {
      resolved.status_of_camera = ''
    }

    if (msg.left_corners !== undefined) {
      resolved.left_corners = geometry_msgs.msg.Vector3.Resolve(msg.left_corners)
    }
    else {
      resolved.left_corners = new geometry_msgs.msg.Vector3()
    }

    if (msg.right_corners !== undefined) {
      resolved.right_corners = geometry_msgs.msg.Vector3.Resolve(msg.right_corners)
    }
    else {
      resolved.right_corners = new geometry_msgs.msg.Vector3()
    }

    if (msg.point !== undefined) {
      resolved.point = geometry_msgs.msg.Vector3.Resolve(msg.point)
    }
    else {
      resolved.point = new geometry_msgs.msg.Vector3()
    }

    if (msg.dolly_found !== undefined) {
      resolved.dolly_found = msg.dolly_found;
    }
    else {
      resolved.dolly_found = false
    }

    if (msg.corners_distance !== undefined) {
      resolved.corners_distance = msg.corners_distance;
    }
    else {
      resolved.corners_distance = 0.0
    }

    return resolved;
    }
};

module.exports = SickTMini;
