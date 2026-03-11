/*
 * func-name: ??0ILoad@@QAE@ABV0@@Z
 * func-address: 0x10010320
 * callers: 0x10036780, 0x1003e400
 * callees: 0x1000d680, 0x1000e620
 */

ILoad *__thiscall ILoad::ILoad(ILoad *this, const struct ILoad *a2)
{
  *(_DWORD *)this = &ILoad::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  sub_1000E620((_DWORD *)this + 3, (int)a2 + 12);
  std::vector<Material *>::vector<Material *>((_DWORD *)this + 7, (int)a2 + 28);
  *((_BYTE *)this + 44) = *((_BYTE *)a2 + 44);
  return this;
}
