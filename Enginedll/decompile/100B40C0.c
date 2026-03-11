/*
 * func-name: ?SetItemTextColor@CREListCtrl@@QAEXHHK@Z
 * func-address: 0x100b40c0
 * callers: none
 * callees: 0x1001ea80, 0x100a1b10
 */

void __thiscall CREListCtrl::SetItemTextColor(CREListCtrl *this, unsigned int a2, int a3, unsigned int a4)
{
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  _DWORD *v8; // ebp
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  _DWORD *i; // esi
  _DWORD *v12; // ebx
  int v13; // [esp+8h] [ebp-8h] BYREF

  if ( (a2 & 0x80000000) == 0 )
  {
    v5 = *((_DWORD *)this + 191);
    v6 = (_DWORD *)((char *)this + 760);
    if ( v5 )
    {
      if ( a2 < (*((_DWORD *)this + 192) - v5) / 20 && a3 >= 0 )
      {
        v7 = *((_DWORD *)this + 187);
        if ( v7 )
        {
          if ( a3 < (unsigned int)((*((_DWORD *)this + 188) - v7) / 40) )
          {
            v8 = (_DWORD *)std::vector<AttributeRange>::operator[](v6, a2);
            v9 = std::vector<EditorVar>::begin(v8, &v13);
            v10 = (_DWORD *)*v9;
            for ( i = (_DWORD *)v9[1]; ; i += 11 )
            {
              v12 = (_DWORD *)v8[2];
              if ( v8[1] > (unsigned int)v12 )
                invalid_parameter_noinfo();
              if ( !v10 || v10 != v8 )
                invalid_parameter_noinfo();
              if ( i == v12 )
                break;
              if ( !v10 )
                invalid_parameter_noinfo();
              if ( (unsigned int)i >= v10[2] )
                invalid_parameter_noinfo();
              if ( *i == a3 )
              {
                if ( (unsigned int)i >= v10[2] )
                  invalid_parameter_noinfo();
                i[2] = a4;
              }
              if ( (unsigned int)i >= v10[2] )
                invalid_parameter_noinfo();
            }
          }
        }
      }
    }
  }
}
