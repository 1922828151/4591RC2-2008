/*
 * func-name: ?HideFreezeHelper@Editor@@AAE?AV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@V23@_N1@Z
 * func-address: 0x10083100
 * callers: 0x1008c0e0, 0x1008c1a0, 0x1008c260, 0x1008c320
 * callees: 0x1000d4b0, 0x1007ec80, 0x101a2500
 */

_DWORD *__thiscall Editor::HideFreezeHelper(
        Editor *this,
        _DWORD *a2,
        char a3,
        struct Actor **a4,
        unsigned int a5,
        int a6,
        char a7,
        char a8)
{
  unsigned int v8; // edi
  char v9; // bl
  struct Actor **v10; // esi
  unsigned int v11; // esi
  int v12; // eax
  struct Actor **v13; // ecx

  v8 = 0;
  v9 = a8;
  while ( a4 && v8 < (int)(a5 - (_DWORD)a4) >> 2 )
  {
    if ( Editor::IsActor(this, a4[v8]) )
    {
      v13 = a4;
      if ( a7 )
      {
        if ( !a4 || v8 >= (int)(a5 - (_DWORD)a4) >> 2 )
        {
          invalid_parameter_noinfo();
          v13 = a4;
        }
        *((_BYTE *)v13[v8++] + 816) = v9;
      }
      else
      {
        if ( !a4 || v8 >= (int)(a5 - (_DWORD)a4) >> 2 )
        {
          invalid_parameter_noinfo();
          v13 = a4;
        }
        *((_BYTE *)v13[v8++] + 817) = v9;
      }
    }
    else
    {
      v10 = a4;
      if ( (unsigned int)a4 > a5 )
        invalid_parameter_noinfo();
      v11 = (unsigned int)&v10[v8];
      if ( v11 > a5 || v11 < (unsigned int)a4 )
        invalid_parameter_noinfo();
      v12 = (int)(a5 - (v11 + 4)) >> 2;
      if ( v12 > 0 )
        memmove_s((void *const)v11, 4 * v12, (const void *const)(v11 + 4), 4 * v12);
      a5 -= 4;
    }
  }
  std::vector<Actor *>::vector<Actor *>(a2, (int)&a3);
  if ( a4 )
    operator delete(a4);
  return a2;
}
