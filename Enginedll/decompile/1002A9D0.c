/*
 * func-name: ??0MaterialManager@@QAE@ABV0@@Z
 * func-address: 0x1002a9d0
 * callers: none
 * callees: 0x1000d680, 0x1000f380, 0x10023830
 */

MaterialManager *__thiscall MaterialManager::MaterialManager(MaterialManager *this, const struct MaterialManager *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  std::vector<Material *>::vector<Material *>((_DWORD *)this + 1, (int)a2 + 4);
  sub_10023830((_DWORD *)this + 5, (int)a2 + 20);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  sub_1000F380((int)this + 40, (int)a2 + 40);
  return this;
}
