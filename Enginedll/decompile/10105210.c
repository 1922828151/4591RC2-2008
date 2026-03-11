/*
 * func-name: ??1PostProcessEffect@@UAE@XZ
 * func-address: 0x10105210
 * callers: 0x10105470, 0x101054d0, 0x10105520, 0x10108190, 0x101083b0
 * callees: 0x100e6830
 */

void __thiscall PostProcessEffect::~PostProcessEffect(PostProcessEffect *this)
{
  Material *v2; // ecx

  *(_DWORD *)this = &PostProcessEffect::`vftable';
  v2 = (Material *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    Material::Release(v2);
    *((_DWORD *)this + 1) = 0;
  }
  std::string::~string((char *)this + 48);
  std::string::~string((char *)this + 20);
}
