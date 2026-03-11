/*
 * func-name: ?ReAdjustTeamMessages@GUIConsole@@QAEXH@Z_0
 * func-address: 0x102ba890
 * callers: 0x100101bd
 * callees: 0x10009773, 0x10014759
 */

void __thiscall GUIConsole::ReAdjustTeamMessages(GUIConsole *this, int a2)
{
  char *v2; // esi
  int v3; // eax
  int v4; // ebx
  bool v5; // sf
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // edx
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // edi
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edi
  unsigned int v18; // edi
  int v19; // ebp
  int v20; // edi
  int v21; // [esp+8h] [ebp-20h]
  int v22; // [esp+Ch] [ebp-1Ch]
  int v23; // [esp+Ch] [ebp-1Ch]
  int v24; // [esp+10h] [ebp-18h]
  _BYTE v26[8]; // [esp+20h] [ebp-8h] BYREF

  v2 = (char *)this + 100;
  v24 = *((_DWORD *)this + 29);
  v3 = *((_DWORD *)this + 26);
  if ( v3 )
    v4 = (*((_DWORD *)this + 27) - v3) / 40;
  else
    v4 = 0;
  v5 = v4 - 1 < 0;
  v6 = v4 - 1;
  v21 = 0;
  if ( !v5 )
  {
    v7 = 40 * v6;
    v22 = 40 * v6;
    while ( v21 < v24 )
    {
      v8 = *((_DWORD *)v2 + 1);
      if ( !v8 || v6 >= (unsigned int)((*((_DWORD *)v2 + 2) - v8) / 40) )
        _invalid_parameter_noinfo();
      v9 = *((_DWORD *)v2 + 1);
      if ( *(_DWORD *)(v9 + v7) == 3 )
      {
        if ( !v9 || v6 >= (unsigned int)((*((_DWORD *)v2 + 2) - v9) / 40) )
          _invalid_parameter_noinfo();
        v10 = *((_DWORD *)v2 + 1);
        if ( *(_DWORD *)(v10 + v7 + 4) != a2 )
        {
          v11 = *((_DWORD *)v2 + 1);
          if ( v10 > *((_DWORD *)v2 + 2) )
            _invalid_parameter_noinfo();
          v12 = v7 + v11;
          if ( v12 > *((_DWORD *)v2 + 2) || v12 < *((_DWORD *)v2 + 1) )
          {
            _invalid_parameter_noinfo();
            v7 = v22;
          }
          sub_10009773((int)v26, (int)v2, v12);
          --*((_DWORD *)this + 29);
        }
      }
      ++v21;
      --v6;
      v7 -= 40;
      v22 = v7;
      if ( v6 < 0 )
        return;
    }
    if ( v6 >= 0 )
    {
      v13 = 40 * v6;
      v23 = 40 * v6;
      do
      {
        v14 = *((_DWORD *)v2 + 1);
        if ( !v14 || v6 >= (unsigned int)((*((_DWORD *)v2 + 2) - v14) / 40) )
          _invalid_parameter_noinfo();
        v15 = *((_DWORD *)v2 + 1);
        if ( *(_DWORD *)(v15 + v13) == 3 )
        {
          if ( !v15 || v6 >= (unsigned int)((*((_DWORD *)v2 + 2) - v15) / 40) )
            _invalid_parameter_noinfo();
          v16 = *((_DWORD *)v2 + 1);
          if ( *(_DWORD *)(v16 + v13 + 4) != a2 )
          {
            v17 = *((_DWORD *)v2 + 1);
            if ( v16 > *((_DWORD *)v2 + 2) )
              _invalid_parameter_noinfo();
            v18 = v13 + v17;
            if ( v18 > *((_DWORD *)v2 + 2) || v18 < *((_DWORD *)v2 + 1) )
              _invalid_parameter_noinfo();
            sub_10014759(v18 + 40, *((_DWORD *)v2 + 2), v18);
            v19 = *((_DWORD *)v2 + 2);
            v20 = v19 - 40;
            do
            {
              std::string::~string((void *)(v20 + 8));
              v20 += 40;
            }
            while ( v20 != v19 );
            *((_DWORD *)v2 + 2) -= 40;
            v13 = v23;
          }
        }
        --v6;
        v13 -= 40;
        v23 = v13;
      }
      while ( v6 >= 0 );
    }
  }
}
