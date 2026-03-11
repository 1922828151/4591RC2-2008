/*
 * func-name: ??1Engine@@IAE@XZ
 * func-address: 0x10096fe0
 * callers: 0x101b8cf0
 * callees: 0x1000db00, 0x1009ab10, 0x101a2500
 */

void __thiscall Engine::~Engine(Engine *this)
{
  sub_1000DB00((int *)this + 31);
  std::string::~string((char *)this + 76);
  std::wstring::~wstring((char *)this + 48);
  sub_1009AB10((char *)this + 32);
  if ( *((_DWORD *)this + 5) )
    operator delete(*((void **)this + 5));
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
}
