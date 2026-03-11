/*
 * func-name: ?first_set_checkkey@Security@IONetwork@Outpop@@QAEXPADH@Z
 * func-address: 0x1000d340
 * callers: none
 * callees: 0x1004e85c, 0x1004e938, 0x1004f11e, 0x1004f124
 */

void *__thiscall Outpop::IONetwork::Security::first_set_checkkey(
        Outpop::IONetwork::Security *this,
        char *Src,
        size_t Size)
{
  void *v4; // eax

  if ( *((_DWORD *)this + 7) )
  {
    operator delete[](*((_DWORD *)this + 7));
    *((_DWORD *)this + 7) = 0;
  }
  v4 = (void *)operator new(Size + 1);
  *((_DWORD *)this + 7) = v4;
  memset(v4, 0, Size + 1);
  return memcpy(*((void **)this + 7), Src, Size);
}
