/*
 * func-name: sub_1014FC20
 * func-address: 0x1014fc20
 * callers: 0x10152c10
 * callees: 0x101a2500, 0x101a2534
 */

int __thiscall sub_1014FC20(int this, _DWORD *a2)
{
  _BYTE *v3; // eax
  const void *v4; // esi

  if ( *(_DWORD *)(this + 4) )
  {
    operator delete(*(void **)(this + 4));
    *(_DWORD *)(this + 4) = 0;
  }
  v3 = operator new(0xC4u);
  if ( v3 )
  {
    v3[28] = 0;
    *(_DWORD *)v3 = -1;
  }
  else
  {
    v3 = 0;
  }
  *(_DWORD *)(this + 4) = v3;
  v4 = (const void *)a2[1];
  if ( v4 )
    qmemcpy(v3, v4, 0xC4u);
  *(_DWORD *)(this + 8) = a2[2];
  *(_DWORD *)(this + 12) = a2[3];
  *(_DWORD *)(this + 16) = a2[4];
  *(_DWORD *)(this + 20) = a2[5];
  *(_DWORD *)(this + 24) = a2[6];
  std::wstring::operator=(this + 28, a2 + 7);
  std::wstring::operator=(this + 76, a2 + 19);
  return this;
}
