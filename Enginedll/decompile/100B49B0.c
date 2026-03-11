/*
 * func-name: ?AdjustLines@CMultiLineEB@@IAEXH@Z
 * func-address: 0x100b49b0
 * callers: 0x100b4c40, 0x100c5fd0, 0x100c95f0
 * callees: 0x1001e9c0, 0x1001ea80, 0x10057340, 0x1006ab80, 0x100a5480, 0x100a5620
 */

void __thiscall CMultiLineEB::AdjustLines(CMultiLineEB *this, int a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // ebp
  int v4; // ecx
  CREEditBox::CUniBuffer **v5; // eax
  bool v6; // zf
  CREEditBox::CUniBuffer *v7; // esi
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int *v11; // edi
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // esi
  wchar_t v18; // bp
  int v19; // eax
  int *v20; // eax
  int *v21; // eax
  int *v22; // eax
  unsigned int v23; // [esp+10h] [ebp-3Ch]
  unsigned int v24; // [esp+14h] [ebp-38h]
  int v25; // [esp+18h] [ebp-34h] BYREF
  int v26; // [esp+1Ch] [ebp-30h] BYREF
  int v27; // [esp+20h] [ebp-2Ch]
  char *v28; // [esp+24h] [ebp-28h]
  CREEditBox::CUniBuffer **v29; // [esp+28h] [ebp-24h]
  int v30; // [esp+2Ch] [ebp-20h] BYREF
  int v31; // [esp+34h] [ebp-18h] BYREF
  int v32; // [esp+3Ch] [ebp-10h] BYREF
  int v33; // [esp+44h] [ebp-8h] BYREF

  v27 = *((_DWORD *)this + 143) - *((_DWORD *)this + 141);
  v2 = a2;
  v3 = (_DWORD *)((char *)this + 892);
  v28 = (char *)this + 892;
  v23 = a2 + 1;
LABEL_2:
  while ( 1 )
  {
    v4 = v3[1];
    v24 = v2;
    if ( !v4 )
      break;
    if ( v2 >= (v3[2] - v4) >> 2 )
      break;
    v5 = *(CREEditBox::CUniBuffer ***)(v3[1] + 4 * v2);
    v6 = *((_BYTE *)v5 + 12) == 0;
    v29 = v5;
    if ( !v6 || !*((_DWORD *)*v5 + 2) )
      break;
    a2 = 0;
    v7 = *v5;
    v8 = *((_DWORD *)*v5 + 2);
    a2 = 0;
    if ( *((_DWORD *)v7 + 2) )
    {
      if ( *((_BYTE *)v7 + 16) && CREEditBox::CUniBuffer::Analyse(v7) < 0
        || CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)v7 + 5), v8 - 1, 1, &a2) < 0 )
      {
        break;
      }
    }
    if ( a2 >= v27 )
      break;
    v9 = v3[1];
    v10 = v9 ? (v3[2] - v9) >> 2 : 0;
    if ( v2 == v10 - 1 )
      break;
    if ( !v9 || v23 >= (v3[2] - v9) >> 2 )
      invalid_parameter_noinfo();
    v11 = *(int **)(v3[1] + 4 * v2 + 4);
    v12 = *v11;
    if ( *(int *)(*v11 + 8) > 0 )
    {
      while ( 1 )
      {
        v26 = 0;
        if ( *(_DWORD *)(v12 + 8) )
        {
          if ( *(_BYTE *)(v12 + 16) && CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)v12) < 0
            || CREEditBox::CUniBuffer::_ScriptStringCPtoX(*(void **)(v12 + 20), 0, 0, &v26) < 0 )
          {
            return;
          }
        }
        v13 = *v11;
        v14 = 0;
        v25 = 0;
        if ( *(_DWORD *)(v13 + 8) )
        {
          if ( *(_BYTE *)(v13 + 16) && CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)v13) < 0
            || CREEditBox::CUniBuffer::_ScriptStringCPtoX(*(void **)(v13 + 20), 0, 1, &v25) < 0 )
          {
            return;
          }
          v14 = v25;
        }
        v15 = v14 - v26;
        if ( v14 - v26 + a2 > v27 )
        {
          v2 = v24 + 1;
          ++v23;
          goto LABEL_2;
        }
        v16 = *v11;
        *(_BYTE *)(v16 + 16) = 1;
        v17 = *v11;
        v18 = **(_WORD **)v16;
        v19 = *(_DWORD *)(*v11 + 8);
        if ( v19 > 0 )
        {
          memmove(*(void **)v17, (const void *)(*(_DWORD *)v17 + 2), 2 * v19);
          --*(_DWORD *)(v17 + 8);
          *(_BYTE *)(v17 + 16) = 1;
        }
        CREEditBox::CUniBuffer::InsertChar(*v29, *((_DWORD *)*v29 + 2), v18);
        a2 += v15;
        v12 = *v11;
        v3 = v28;
        if ( *(int *)(*v11 + 8) <= 0 )
        {
          v2 = v24;
          break;
        }
      }
    }
    v20 = std::vector<EditorVar>::begin(v3, &v32);
    v21 = sub_10057340(v20, &v31, v2);
    v22 = sub_10057340(v21, &v30, 1);
    std::vector<Model *>::erase(v3, &v33, *v22, (char *)v22[1]);
  }
}
