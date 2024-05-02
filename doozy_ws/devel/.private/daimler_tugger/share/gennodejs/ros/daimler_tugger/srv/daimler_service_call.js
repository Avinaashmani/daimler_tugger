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

class daimler_service_callRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Set_Undock_State = null;
      this.Set_Dock_State = null;
    }
    else {
      if (initObj.hasOwnProperty('Set_Undock_State')) {
        this.Set_Undock_State = initObj.Set_Undock_State
      }
      else {
        this.Set_Undock_State = false;
      }
      if (initObj.hasOwnProperty('Set_Dock_State')) {
        this.Set_Dock_State = initObj.Set_Dock_State
      }
      else {
        this.Set_Dock_State = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type daimler_service_callRequest
    // Serialize message field [Set_Undock_State]
    bufferOffset = _serializer.bool(obj.Set_Undock_State, buffer, bufferOffset);
    // Serialize message field [Set_Dock_State]
    bufferOffset = _serializer.bool(obj.Set_Dock_State, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type daimler_service_callRequest
    let len;
    let data = new daimler_service_callRequest(null);
    // Deserialize message field [Set_Undock_State]
    data.Set_Undock_State = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Set_Dock_State]
    data.Set_Dock_State = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 2;
  }

  static datatype() {
    // Returns string type for a service object
    return 'daimler_tugger/daimler_service_callRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '56af2ae496e170116ca62c16fe9d2a89';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool Set_Undock_State
    bool Set_Dock_State
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new daimler_service_callRequest(null);
    if (msg.Set_Undock_State !== undefined) {
      resolved.Set_Undock_State = msg.Set_Undock_State;
    }
    else {
      resolved.Set_Undock_State = false
    }

    if (msg.Set_Dock_State !== undefined) {
      resolved.Set_Dock_State = msg.Set_Dock_State;
    }
    else {
      resolved.Set_Dock_State = false
    }

    return resolved;
    }
};

class daimler_service_callResponse {
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
    // Serializes a message object of type daimler_service_callResponse
    // Serialize message field [Result]
    bufferOffset = _serializer.bool(obj.Result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type daimler_service_callResponse
    let len;
    let data = new daimler_service_callResponse(null);
    // Deserialize message field [Result]
    data.Result = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'daimler_tugger/daimler_service_callResponse';
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
    const resolved = new daimler_service_callResponse(null);
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
  Request: daimler_service_callRequest,
  Response: daimler_service_callResponse,
  md5sum() { return 'dd04567e9742c14ebff061ebed5af4a1'; },
  datatype() { return 'daimler_tugger/daimler_service_call'; }
};
