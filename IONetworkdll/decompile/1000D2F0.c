/*
 * func-name: ?first_set_rsapubkey@Security@IONetwork@Outpop@@QAEXPADH@Z
 * func-address: 0x1000d2f0
 * callers: 0x1003dd30, 0x1003fba0, 0x1003ffb0, 0x10041b20
 * callees: 0x1004e85c, 0x1004e938, 0x1004f11e, 0x1004f124
 */

void *__thiscall Outpop::IONetwork::Security::first_set_rsapubkey(
        Outpop::IONetwork::Security *this,
        char *Src,
        size_t Size)
{
  void *v4; // eax
  void *result; // eax

  if ( *((_DWORD *)this + 5) )
  {
    operator delete[](*((_DWORD *)this + 5));
    *((_DWORD *)this + 5) = 0;
  }
  v4 = (void *)operator new(Size + 1);
  *((_DWORD *)this + 5) = v4;
  memset(v4, 0, Size + 1);
  result = memcpy(*((void **)this + 5), Src, Size);
  *((_DWORD *)this + 6) = Size;
  return result;
}
