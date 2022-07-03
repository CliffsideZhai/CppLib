//
// Created by zhaishunkai on 6/15/22.
//

#ifndef CPPLIB_NONCOPYABLE_H
#define CPPLIB_NONCOPYABLE_H
namespace zsk{
    class noncopyable{
    public:
        noncopyable(const noncopyable&) = delete;
        void operator=(const noncopyable&) = delete;
    protected:
        noncopyable() = default;
        ~noncopyable() = default;
    };
}
#endif //CPPLIB_NONCOPYABLE_H
