/*
 * func-name: ?DeleteAllLine@CMultiLineStatic@@QAEXXZ
 * func-address: 0x100b4db0
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall CMultiLineStatic::DeleteAllLine(CMultiLineStatic *this)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // eax
  void *v8; // ebp
  int v9; // eax

  while ( *((_DWORD *)this + 179) )
  {
    v2 = *((_DWORD *)this + 178);
    v3 = v2 + *((_DWORD *)this + 179);
    if ( v2 > v3 )
      invalid_parameter_noinfo();
    v4 = *((_DWORD *)this + 178);
    v5 = v3 - 1;
    if ( v5 > v4 + *((_DWORD *)this + 179) || v5 < v4 )
      invalid_parameter_noinfo();
    v6 = v5 >> 2;
    if ( v5 >= *((_DWORD *)this + 179) + *((_DWORD *)this + 178) )
      invalid_parameter_noinfo();
    v7 = *((_DWORD *)this + 177);
    if ( v7 <= v6 )
      v6 -= v7;
    v8 = *(void **)(*(_DWORD *)(*((_DWORD *)this + 176) + 4 * v6) + 4 * (v5 & 3));
    if ( v8 )
    {
      std::wstring::~wstring(v8);
      operator delete(v8);
    }
    v9 = *((_DWORD *)this + 179);
    if ( v9 )
    {
      *((_DWORD *)this + 179) = v9 - 1;
      if ( v9 == 1 )
        *((_DWORD *)this + 178) = 0;
    }
  }
}
