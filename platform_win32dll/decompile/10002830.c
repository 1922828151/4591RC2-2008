/*
 * func-name: sub_10002830
 * func-address: 0x10002830
 * callers: none
 * callees: 0x10019760
 */

void __thiscall sub_10002830(Input *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  _DWORD *v9; // eax
  char *v10; // ebp
  int v11; // esi
  bool v12; // zf
  _DWORD *v13; // [esp+38h] [ebp-8h]
  int v14; // [esp+3Ch] [ebp-4h]

  v2 = *((_DWORD *)this + 1521);
  if ( v2 )
  {
    qmemcpy((char *)this + 6372, (char *)this + 6116, 0x100u);
    v3 = (*(int (__stdcall **)(int, int, char *))(*(_DWORD *)v2 + 36))(v2, 256, (char *)this + 6116);
    if ( v3 < 0 )
    {
      if ( v3 == -2147024866 )
      {
        while ( (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 1521) + 28))(*((_DWORD *)this + 1521)) == -2147024866 )
          ;
      }
      memset((char *)this + 6116, 0, 0x100u);
    }
  }
  v4 = *((_DWORD *)this + 1522);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 1658);
    *((_DWORD *)this + 1661) = *((_DWORD *)this + 1657);
    v6 = *((_DWORD *)this + 1659);
    *((_DWORD *)this + 1662) = v5;
    v7 = *((_DWORD *)this + 1660);
    *((_DWORD *)this + 1663) = v6;
    *((_DWORD *)this + 1664) = v7;
    v8 = (*(int (__stdcall **)(int, int, char *))(*(_DWORD *)v4 + 36))(v4, 16, (char *)this + 6628);
    if ( v8 < 0 )
    {
      (*(void (__thiscall **)(Input *, int))(*(_DWORD *)this + 76))(this, 1);
      if ( v8 == -2147024866 )
      {
        while ( (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 1522) + 28))(*((_DWORD *)this + 1522)) == -2147024866 )
          ;
      }
      *((_DWORD *)this + 1657) = 0;
      *((_DWORD *)this + 1658) = 0;
      *((_DWORD *)this + 1659) = 0;
      *((_DWORD *)this + 1660) = 0;
    }
  }
  v9 = (_DWORD *)((char *)this + 6092);
  v10 = (char *)this + 6660;
  v13 = (_DWORD *)((char *)this + 6092);
  v14 = 4;
  do
  {
    if ( *v9 )
    {
      qmemcpy(v10 + 320, v10, 0x50u);
      v11 = (*(int (__stdcall **)(_DWORD, int, char *))(*(_DWORD *)*v9 + 36))(*v9, 80, v10);
      if ( v11 < 0 )
      {
        (*(void (__thiscall **)(Input *, int))(*(_DWORD *)this + 76))(this, 1);
        if ( v11 == -2147024866 )
        {
          while ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*v13 + 28))(*v13) == -2147024866 )
            ;
        }
        memset(v10, 0, 0x50u);
      }
    }
    v9 = v13 + 1;
    v10 += 80;
    v12 = v14-- == 1;
    ++v13;
  }
  while ( !v12 );
  Input::Update(this);
}
