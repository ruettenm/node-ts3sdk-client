/**
 * TeamSpeak 3 SDK Client Addon for Node.js
 *
 * Copyright (c) Sven Paulsen. All rights reserved.
 */

#include "shared.h"

#ifndef ADDON_ARGUMENT_H
#define ADDON_ARGUMENT_H

class Argument
{
public:
    static unsigned int num(const Nan::FunctionCallbackInfo<v8::Value> &info, int min = 0, int max = 0);
    static unsigned int get(const Nan::FunctionCallbackInfo<v8::Value> &info, int arg, uint64* res, uint64 def);
    static unsigned int get(const Nan::FunctionCallbackInfo<v8::Value> &info, int arg, unsigned int* res, unsigned int def);
    static unsigned int get(const Nan::FunctionCallbackInfo<v8::Value> &info, int arg, int* res, int def);
    static unsigned int get(const Nan::FunctionCallbackInfo<v8::Value> &info, int arg, char** res, const char* def);
    static unsigned int get(const Nan::FunctionCallbackInfo<v8::Value> &info, int arg, vector<char*> &res, const char* def);
};

#endif // ADDON_ARGUMENT_H