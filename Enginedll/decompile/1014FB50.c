/*
 * func-name: sub_1014FB50
 * func-address: 0x1014fb50
 * callers: 0x10153480
 * callees: 0x101a2534
 */

_DWORD *__thiscall sub_1014FB50(_DWORD *this, _DWORD *a2)
{
  _BYTE *v3; // eax
  const void *v4; // esi

  this[1] = 0;
  std::wstring::wstring(this + 7);
  std::wstring::wstring(this + 19);
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
  this[1] = v3;
  v4 = (const void *)a2[1];
  if ( v4 )
    qmemcpy(v3, v4, 0xC4u);
  this[2] = a2[2];
  this[3] = a2[3];
  this[4] = a2[4];
  this[5] = a2[5];
  this[6] = a2[6];
  std::wstring::operator=(this + 7, a2 + 7);
  std::wstring::operator=(this + 19, a2 + 19);
  return this;
}
