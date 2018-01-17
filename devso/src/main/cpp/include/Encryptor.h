//
// Created by 林帅斌 on 2018/1/17.
//

#ifndef CIPHER_SO_ENCRYPTOR_H
#define CIPHER_SO_ENCRYPTOR_H


#include <jni.h>
#include <string>

class Encryptor {

private:
    JNIEnv *jniEnv;
    jobject context;

public:
    Encryptor(JNIEnv *jniEnv, jobject context);

    std::string decrypt(char *raw);

};


#endif //CIPHER_SO_ENCRYPTOR_H
