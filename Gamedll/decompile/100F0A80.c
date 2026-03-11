/*
 * func-name: ??0HUDSystem@@QAE@XZ_0
 * func-address: 0x100f0a80
 * callers: 0x1000a010
 * callees: 0x10007b03
 */

HUDSystem *__thiscall HUDSystem::HUDSystem(HUDSystem *this)
{
  char *v2; // edi

  v2 = (char *)this + 4;
  *(_BYTE *)this = 1;
  *((_DWORD *)this + 2) = sub_10007B03();
  *((_DWORD *)v2 + 2) = 0;
  return this;
}
