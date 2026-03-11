/*
 * func-name: sub_10002780
 * func-address: 0x10002780
 * callers: none
 * callees: none
 */

int __thiscall sub_10002780(_DWORD *this, unsigned __int8 a2)
{
  int v3; // eax
  int result; // eax
  _DWORD *v5; // esi
  int v6; // edi
  _DWORD *v7; // esi
  int v8; // edi

  v3 = this[1521];
  this[1527] = a2;
  if ( a2 )
  {
    if ( v3 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 28))(v3);
    result = this[1522];
    if ( result )
      result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 28))(this[1522]);
    v5 = this + 1523;
    v6 = 4;
    do
    {
      if ( *v5 )
        result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*v5 + 28))(*v5);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    if ( v3 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 32))(v3);
    result = this[1522];
    if ( result )
      result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 32))(this[1522]);
    v7 = this + 1523;
    v8 = 4;
    do
    {
      if ( *v7 )
        result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*v7 + 32))(*v7);
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
