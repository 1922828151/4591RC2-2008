/*
 * func-name: ??1C3DModel@@UAE@XZ
 * func-address: 0x100c9db0
 * callers: 0x1006b630
 * callees: 0x10010ec0, 0x100c7390, 0x101a2500
 */

void __thiscall C3DModel::~C3DModel(C3DModel *this)
{
  int v2; // ecx

  *(_DWORD *)this = &C3DModel::`vftable';
  v2 = *((_DWORD *)this + 133);
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 80))(v2, 1);
  if ( *((_DWORD *)this + 271) )
    operator delete(*((void **)this + 271));
  std::string::~string((char *)this + 984);
  std::string::~string((char *)this + 956);
  Camera::~Camera((C3DModel *)((char *)this + 536));
  CREControl::~CREControl(this);
}
