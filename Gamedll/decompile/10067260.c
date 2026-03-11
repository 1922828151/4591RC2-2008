/*
 * func-name: sub_10067260
 * func-address: 0x10067260
 * callers: 0x10012bac
 * callees: 0x102c9d50
 */

void __thiscall sub_10067260(_DWORD *this)
{
  _DWORD *v1; // ebx
  void **v2; // eax
  void **v3; // esi
  bool v4; // zf
  _DWORD **v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // ebx
  void **v9; // [esp+10h] [ebp-4h]

  v1 = this;
  v2 = (void **)this[1];
  v3 = (void **)*v2;
  *v2 = v2;
  *(_DWORD *)(this[1] + 4) = this[1];
  v4 = v3 == (void **)this[1];
  this[2] = 0;
  if ( !v4 )
  {
    do
    {
      v9 = (void **)*v3;
      if ( v3[8] )
        operator delete(v3[8]);
      v3[8] = 0;
      v3[9] = 0;
      v3[10] = 0;
      v5 = (_DWORD **)v3[5];
      v6 = *v5;
      *v5 = v5;
      *((_DWORD *)v3[5] + 1) = v3[5];
      v4 = v6 == v3[5];
      v3[6] = 0;
      if ( !v4 )
      {
        do
        {
          v7 = (_DWORD *)*v6;
          std::wstring::~wstring(v6 + 3);
          operator delete(v6);
          v6 = v7;
        }
        while ( v7 != v3[5] );
        v1 = this;
      }
      operator delete(v3[5]);
      v3[5] = 0;
      operator delete(v3);
      v3 = v9;
    }
    while ( v9 != (void **)v1[1] );
  }
}
