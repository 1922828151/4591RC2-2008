/*
 * func-name: ??1PRTSettings@@QAE@XZ
 * func-address: 0x10029240
 * callers: 0x100295d0, 0x100296d0, 0x100300f0, 0x10030270, 0x1007c450, 0x1013a9b0, 0x1013df40
 * callees: 0x1000cc00, 0x1000db00, 0x101a2500
 */

void __thiscall PRTSettings::~PRTSettings(PRTSettings *this)
{
  int v2; // eax
  char *v3; // esi

  std::string::~string((char *)this + 2263);
  sub_1000DB00((int *)((char *)this + 2247));
  sub_1000DB00((int *)((char *)this + 2231));
  v2 = *(_DWORD *)((char *)this + 2219);
  v3 = (char *)this + 2215;
  if ( v2 )
  {
    sub_1000CC00(v2, *((_DWORD *)v3 + 2));
    operator delete(*((void **)v3 + 1));
  }
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  *((_DWORD *)v3 + 3) = 0;
}
