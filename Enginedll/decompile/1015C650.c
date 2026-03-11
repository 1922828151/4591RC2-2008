/*
 * func-name: ??1SubareaManager@@UAE@XZ
 * func-address: 0x1015c650
 * callers: 0x100369e0, 0x101b96b0
 * callees: 0x1003c060, 0x101a2500
 */

void __thiscall SubareaManager::~SubareaManager(SubareaManager *this)
{
  int v2; // ecx
  int v3; // eax
  char *v4; // esi

  *(_DWORD *)this = &SubareaManager::`vftable';
  v2 = *((_DWORD *)this + 27);
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 8))(v2, 1);
    *((_DWORD *)this + 27) = 0;
  }
  std::string::~string((char *)this + 80);
  v3 = *((_DWORD *)this + 2);
  v4 = (char *)this + 4;
  if ( v3 )
  {
    sub_1003C060(v3, *((_DWORD *)v4 + 2));
    operator delete(*((void **)v4 + 1));
  }
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
}
