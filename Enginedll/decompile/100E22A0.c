/*
 * func-name: ?PushPrefix@EngineLog@@QAEXPAD@Z
 * func-address: 0x100e22a0
 * callers: none
 * callees: none
 */

void __thiscall EngineLog::PushPrefix(EngineLog *this, char *a2)
{
  if ( *((int *)this + 61) < 19 )
  {
    std::string::operator+=((char *)this + 136, a2);
    *((_DWORD *)this + (*((_DWORD *)this + 61))++ + 41) = strlen(a2);
  }
}
