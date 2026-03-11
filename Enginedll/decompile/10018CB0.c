/*
 * func-name: ?IsValid@Texture@@QAE_NXZ
 * func-address: 0x10018cb0
 * callers: none
 * callees: none
 */

BOOL __thiscall Texture::IsValid(Texture *this)
{
  return *((_DWORD *)this + 6) != -1;
}
