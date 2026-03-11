/*
 * func-name: ?IsVisible@Light@@QAE_NXZ
 * func-address: 0x100dd790
 * callers: 0x10055de0, 0x101286c0
 * callees: none
 */

BOOL __thiscall Light::IsVisible(Light *this)
{
  return !*((_BYTE *)this + 816) && *((float *)this + 273) > 0.0 && *((_BYTE *)this + 1052);
}
