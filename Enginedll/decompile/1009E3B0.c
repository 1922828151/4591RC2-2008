/*
 * func-name: ?Draw@ModelFrame@@QAEXXZ
 * func-address: 0x1009e3b0
 * callers: 0x1009e3b0, 0x1012d660
 * callees: 0x1009e3b0
 */

void __thiscall ModelFrame::Draw(ModelFrame *this)
{
  ModelFrame *v2; // ecx
  unsigned int v3; // ebp
  ModelFrame *v4; // ecx
  int v5; // ecx
  int *v6; // esi
  int v7; // eax
  int v8; // edx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  _DWORD *v12; // eax
  int i; // [esp+14h] [ebp-4h]

  v2 = (ModelFrame *)*((_DWORD *)this + 90);
  v3 = 0;
  if ( v2 )
    ModelFrame::Draw(v2);
  v4 = (ModelFrame *)*((_DWORD *)this + 89);
  if ( v4 )
    ModelFrame::Draw(v4);
  v5 = *((_DWORD *)this + 1);
  if ( v5 && (*((_DWORD *)this + 2) - v5) >> 2 && **((_DWORD **)this + 1) && !*((_BYTE *)this + 376) )
  {
    for ( i = 0; ; i += 20 )
    {
      v6 = (int *)*((_DWORD *)this + 1);
      if ( v6 && (*((_DWORD *)this + 2) - (int)v6) >> 2 )
      {
        v6 = (int *)*((_DWORD *)this + 1);
        v7 = *v6;
      }
      else
      {
        v7 = 0;
      }
      v8 = *(_DWORD *)(v7 + 2480);
      if ( !v8 || v3 >= (*(_DWORD *)(v7 + 2484) - v8) / 20 )
        break;
      if ( v6 && (*((_DWORD *)this + 2) - (int)v6) >> 2 )
      {
        v6 = (int *)*((_DWORD *)this + 1);
        v9 = *v6;
      }
      else
      {
        v9 = 0;
      }
      if ( v6 && (*((_DWORD *)this + 2) - (int)v6) >> 2 )
        v10 = **((_DWORD **)this + 1);
      else
        v10 = 0;
      v11 = *(_DWORD *)(v10 + 2480);
      if ( !v11 || v3 >= (*(_DWORD *)(v10 + 2484) - v11) / 20 )
        invalid_parameter_noinfo();
      v12 = (_DWORD *)(i + *(_DWORD *)(v10 + 2480));
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 60))(
        v9,
        *v12,
        v12[1],
        v12[2],
        v12[3],
        v12[4]);
      ++v3;
    }
  }
}
