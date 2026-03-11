/*
 * func-name: ??0ShadowEngine@@QAE@ABV0@@Z
 * func-address: 0x100100e0
 * callers: none
 * callees: 0x1000e450, 0x1000f130
 */

ShadowEngine *__thiscall ShadowEngine::ShadowEngine(ShadowEngine *this, const struct ShadowEngine *a2)
{
  *(_DWORD *)this = &ShadowEngine::`vftable';
  *((float *)this + 1) = *((float *)a2 + 1);
  sub_1000E450((_DWORD *)this + 2, (int)a2 + 8);
  Texture::Texture((ShadowEngine *)((char *)this + 24), (const struct ShadowEngine *)((char *)a2 + 24));
  *((_BYTE *)this + 180) = *((_BYTE *)a2 + 180);
  *((_BYTE *)this + 181) = *((_BYTE *)a2 + 181);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  return this;
}
