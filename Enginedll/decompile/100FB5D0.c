/*
 * func-name: sub_100FB5D0
 * func-address: 0x100fb5d0
 * callers: 0x100eaad0
 * callees: 0x100fe5b0
 */

_DWORD *__thiscall sub_100FB5D0(_DWORD *this)
{
  char *v2; // edi
  int v3; // eax
  _DWORD *result; // eax

  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  v2 = (char *)(this + 9);
  v3 = sub_100FE5B0(this + 9);
  *((_DWORD *)v2 + 1) = v3;
  *(_BYTE *)(v3 + 41) = 1;
  *(_DWORD *)(*((_DWORD *)v2 + 1) + 4) = *((_DWORD *)v2 + 1);
  **((_DWORD **)v2 + 1) = *((_DWORD *)v2 + 1);
  *(_DWORD *)(*((_DWORD *)v2 + 1) + 8) = *((_DWORD *)v2 + 1);
  *((_DWORD *)v2 + 2) = 0;
  *(float *)this = 0.30000001;
  this[4] = 0;
  *((float *)this + 1) = 0.0;
  *((float *)this + 2) = 0.0;
  result = this;
  *((float *)this + 3) = 0.0;
  return result;
}
