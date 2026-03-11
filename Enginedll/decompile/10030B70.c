/*
 * func-name: ??4ShaderManager@@QAEAAV0@ABV0@@Z
 * func-address: 0x10030b70
 * callers: none
 * callees: 0x10011510, 0x1002f070, 0x1002f1c0
 */

int *__thiscall ShaderManager::operator=(int *this, int a2)
{
  _DWORD *v3; // edi

  v3 = this + 1;
  sub_10011510((int)(this + 1), a2 + 4);
  sub_10011510((int)(v3 + 4), a2 + 20);
  sub_10011510((int)(v3 + 8), a2 + 36);
  sub_10011510((int)(v3 + 12), a2 + 52);
  std::string::operator=(v3 + 16, a2 + 68);
  *((_BYTE *)v3 + 92) = *(_BYTE *)(a2 + 96);
  sub_1002F070(this + 25, a2 + 100);
  sub_1002F1C0(this + 29, (int *)(a2 + 116));
  qmemcpy(this + 33, (const void *)(a2 + 132), 0x4Cu);
  return this;
}
