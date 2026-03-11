/*
 * func-name: ??1Manual_Event@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000c140
 * callers: 0x100036a0, 0x10003e80, 0x10004030
 * callees: none
 */

void __thiscall Outpop::Utility::Manual_Event::~Manual_Event(Outpop::Utility::Manual_Event *this)
{
  void *v1; // [esp-4h] [ebp-18h]

  if ( !*((_DWORD *)this + 1) )
  {
    v1 = *(void **)this;
    *((_DWORD *)this + 1) = 1;
    CloseHandle(v1);
  }
}
