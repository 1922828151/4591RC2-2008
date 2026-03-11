/*
 * func-name: sub_10265BB0
 * func-address: 0x10265bb0
 * callers: 0x10017634
 * callees: 0x102c9d50
 */

void __thiscall sub_10265BB0(_DWORD *this)
{
  void **v1; // eax
  void *v2; // edi
  bool v3; // zf
  int v4; // esi
  int i; // ebp
  void *v6; // [esp+18h] [ebp-14h]

  v1 = (void **)this[1];
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(this[1] + 4) = this[1];
  v3 = v2 == (void *)this[1];
  this[2] = 0;
  if ( !v3 )
  {
    do
    {
      v4 = *((_DWORD *)v2 + 4);
      v6 = *(void **)v2;
      if ( v4 )
      {
        for ( i = *((_DWORD *)v2 + 5); v4 != i; v4 += 128 )
        {
          std::wstring::~wstring((void *)(v4 + 100));
          std::wstring::~wstring((void *)(v4 + 72));
          std::string::~string((void *)(v4 + 4));
        }
        operator delete(*((void **)v2 + 4));
      }
      *((_DWORD *)v2 + 4) = 0;
      *((_DWORD *)v2 + 5) = 0;
      *((_DWORD *)v2 + 6) = 0;
      operator delete(v2);
      v2 = v6;
    }
    while ( v6 != (void *)this[1] );
  }
}
