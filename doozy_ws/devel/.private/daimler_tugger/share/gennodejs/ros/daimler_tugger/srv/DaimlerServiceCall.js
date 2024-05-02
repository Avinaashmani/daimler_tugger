// Auto-generated. Do not edit!

// (in-package daimler_tugger.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class DaimlerServiceCallRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Set_Dock_State = null;
    }
    else {
      if (initObj.hasOwnProperty('Set_Dock_State')) {
        this.Set_Dock_State = initObj.Set_Dock_State
      }
      else {
        this.Set_Dock_State = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DaimlerServiceCallRequest
    // Serialize message field [Set_Dock_State]
    bufferOffset = _serializer.bool(obj.Set_Dock_State, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DaimlerServiceCallRequest
    let len;
    let data = new DaimlerServiceCallRequest(null);
    // Deserialize message field [Set_Dock_State]
    data.Set_Dock_State = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'daimler_tugger/DaimlerServiceCallRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2cd660de3b311f808084e2d9abd2644a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool Set_Dock_State
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DaimlerServiceCallRequest(null);
    if (msg.Set_Dock_State !== undefined) {
      resolved.Set_Dock_State = msg.Set_Dock_State;
    }
    else {
      resolved.Set_Dock_State = false
    }

    return resolved;
    }
};

class DaimlerServiceCallResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Result = null;
    }
    else {
      if (initObj.hasOwnProperty('Result')) {
        this.Result = initObj.Result
      }
      else {
        this.Result = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DaimlerServiceCallResponse
    // Serialize message field [Result]
    bufferOffset = _serializer.bool(obj.Result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DaimlerServiceCallResponse
    let len;
    let data = new DaimlerServiceCallResponse(null);
    // Deserialize message field [Result]
    data.Result = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'daimler_tugger/DaimlerServiceCallResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '85ed39ee8c4e8f1c21743e6fe4dd523e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool Result
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DaimlerServiceCallResponse(null);
    if (msg.Result !== undefined) {
      resolved.Result = msg.Result;
    }
    else {
      resolved.Result = false
    }

    return resolved;
    }
};

module.exports = {
  Request: DaimlerServiceCallRequest,
  Response: DaimlerServiceCallResponse,
  md5sum() { return '9ac08f7e71c0b3bbe9b763939b61b7bb'; },
  datatype() { return 'daimler_tugger/DaimlerServiceCall'; }
};
