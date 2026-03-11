/*
 * func-name: ??0GUISystem@@QAE@ABV0@@Z
 * func-address: 0x10070b00
 * callers: none
 * callees: 0x1006ee30, 0x100700d0
 */

GUISystem *__thiscall GUISystem::GUISystem(GUISystem *this, const struct GUISystem *a2)
{
  *(_DWORD *)this = &GUISystem::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 8);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  sub_1006EE30((_DWORD *)this + 4, (int)a2 + 16);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_BYTE *)this + 44) = *((_BYTE *)a2 + 44);
  *((_BYTE *)this + 45) = *((_BYTE *)a2 + 45);
  *((_BYTE *)this + 46) = *((_BYTE *)a2 + 46);
  *((_BYTE *)this + 47) = *((_BYTE *)a2 + 47);
  *((float *)this + 12) = *((float *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  sub_100700D0((int)this + 56, (int)a2 + 56);
  return this;
}
