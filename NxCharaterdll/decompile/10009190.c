/*
 * func-name: sub_10009190
 * func-address: 0x10009190
 * callers: none
 * callees: none
 */

int __thiscall sub_10009190(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi

  while ( (*(int (__thiscall **)(_DWORD *))*this)(this) )
  {
    v2 = *this;
    v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 4))(this, 0);
    (*(void (__thiscall **)(_DWORD *, int))(v2 + 12))(this, v3);
  }
  v4 = this[3];
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 32))(this, 0);
  return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 20))(v4, this);
}
