/*
 * func-name: ?AddLine@CMultiLineStatic@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PBUD3DXCOLOR@@@Z
 * func-address: 0x100c5520
 * callers: 0x100c5a70
 * callees: 0x1006a3a0, 0x1006a3d0, 0x1006ab80, 0x1006fce0, 0x100956b0, 0x100a3c30, 0x100a5410, 0x100a5480, 0x100b5280, 0x101a2500, 0x101a2534
 */

void __userpurge CMultiLineStatic::AddLine(int a1@<ecx>, int a2@<edi>, _DWORD *a3, float *a4)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // edi
  int v10; // edi
  int v11; // eax
  CREScrollBar *v12; // ecx
  _DWORD *v13; // edi
  int v14; // ecx
  unsigned int v15; // ebx
  int v16; // eax
  const void **v17; // ebp
  _DWORD *v18; // eax
  __int16 v19; // di
  int v20; // eax
  bool v21; // zf
  float *v22; // eax
  float *v23; // edi
  float *v24; // eax
  _DWORD *v25; // edi
  _DWORD *v26; // eax
  _DWORD *v27; // edi
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // edi
  float *v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // ebp
  unsigned int v34; // edi
  unsigned int v35; // eax
  void *v36; // ebx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  CREScrollBar *v40; // ecx
  int v41; // eax
  int v42; // edi
  int v43; // edx
  CREScrollBar *v44; // esi
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  int v49; // [esp+Ch] [ebp-74h] BYREF
  int v50; // [esp+10h] [ebp-70h] BYREF
  int v51; // [esp+14h] [ebp-6Ch]
  int v52; // [esp+18h] [ebp-68h]
  _BYTE v53[20]; // [esp+1Ch] [ebp-64h] BYREF
  int v54; // [esp+30h] [ebp-50h]
  char v55[4]; // [esp+38h] [ebp-48h] BYREF
  int v56; // [esp+3Ch] [ebp-44h]
  struct _EXCEPTION_REGISTRATION_RECORD *v57; // [esp+74h] [ebp-Ch]
  void *v58; // [esp+78h] [ebp-8h]
  int v59; // [esp+7Ch] [ebp-4h]

  v59 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v58 = &loc_101ACB65;
  v57 = ExceptionList;
  if ( !*(_DWORD *)(a1 + 792) )
  {
    v6 = **(_DWORD **)(a1 + 120);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 4);
      v8 = *(_DWORD *)(a1 + 112);
      if ( REGetGlobalDialogResourceManager() )
      {
        v9 = *(_DWORD *)(*(_DWORD *)(v8 + 752) + 4 * v7);
        v10 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v9);
        if ( v10 )
        {
          (*(void (__stdcall **)(_DWORD, char *, int))(**(_DWORD **)(v10 + 520) + 28))(*(_DWORD *)(v10 + 520), v55, a2);
          v11 = (*(_DWORD *)(a1 + 176) - *(_DWORD *)(a1 + 168)) / (v56 + *(_DWORD *)(a1 + 752));
          *(_DWORD *)(a1 + 720) = v56;
          v12 = *(CREScrollBar **)(a1 + 756);
          *(_DWORD *)(a1 + 724) = v11;
          if ( v12 )
            CREScrollBar::SetPageSize(v12, v11);
          *(_DWORD *)(a1 + 792) = (*(int (**)(void))(**(_DWORD **)(v10 + 520) + 32))();
          CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)(a1 + 780));
        }
      }
    }
  }
  std::wstring::wstring(v53);
  v13 = a3;
  v14 = a3[5];
  v15 = 0;
  v16 = *(_DWORD *)(a1 + 172) - *(_DWORD *)(a1 + 164) - 6;
  v59 = 0;
  v52 = v14;
  v50 = 0;
  v51 = v16;
  if ( v14 > 0 )
  {
    v17 = (const void **)(a1 + 780);
    while ( 1 )
    {
      *(_WORD *)*v17 = 0;
      *(_DWORD *)(a1 + 788) = 0;
      *(_BYTE *)(a1 + 796) = 1;
      if ( v15 > v13[5] )
        invalid_parameter_noinfo();
      v18 = v13 + 1;
      if ( v13[6] >= 8u )
        v18 = (_DWORD *)*v18;
      v19 = *((_WORD *)v18 + v15);
      v20 = *(_DWORD *)(a1 + 788);
      if ( v20 >= 0
        && (v20 + 1 < *(_DWORD *)(a1 + 784) || CREEditBox::CUniBuffer::Grow((CREEditBox::CUniBuffer *)(a1 + 780))) )
      {
        memmove((char *)*v17 + 2, *v17, 2 * *(_DWORD *)(a1 + 788) + 2);
        *(_WORD *)*v17 = v19;
        ++*(_DWORD *)(a1 + 788);
        *(_BYTE *)(a1 + 796) = 1;
      }
      v21 = *(_DWORD *)(a1 + 788) == 0;
      v49 = 0;
      if ( !v21 && (!*(_BYTE *)(a1 + 796) || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)(a1 + 780)) >= 0) )
        CREEditBox::CUniBuffer::_ScriptStringCPtoX(*(void **)(a1 + 800), 0, 1, &v49);
      if ( v50 + v49 < v51 )
      {
        v27 = a3;
        if ( v15 > a3[5] )
          invalid_parameter_noinfo();
        v28 = v27 + 1;
        if ( v27[6] >= 8u )
          v28 = (_DWORD *)*v28;
        std::wstring::operator+=(v53, *((unsigned __int16 *)v28 + v15));
        v50 += v49;
      }
      else
      {
        v22 = (float *)operator new(0x38u);
        v23 = v22;
        v50 = (int)v22;
        LOBYTE(v59) = 1;
        if ( v22 )
          std::wstring::wstring(v22);
        else
          v23 = 0;
        v23[7] = GSeconds;
        v23[8] = *(float *)(a1 + 732);
        LOBYTE(v59) = 0;
        v50 = (int)v23;
        std::wstring::operator=(v23, v53);
        v24 = a4;
        if ( !a4 )
          v24 = (float *)(**(_DWORD **)(a1 + 120) + 180);
        v23[9] = *v24;
        v23[10] = v24[1];
        v23[11] = v24[2];
        v23[12] = v24[3];
        *((_BYTE *)v23 + 52) = 1;
        sub_1006FCE0(a1 + 700, &v50);
        v25 = a3;
        if ( v15 > a3[5] )
          invalid_parameter_noinfo();
        v26 = v25 + 1;
        if ( v25[6] >= 8u )
          v26 = (_DWORD *)*v26;
        std::wstring::operator=(v53, *((unsigned __int16 *)v26 + v15));
        v50 = v49;
      }
      if ( (int)++v15 >= v52 )
        break;
      v13 = a3;
    }
  }
  if ( v54 )
  {
    v29 = operator new(0x38u);
    v30 = v29;
    a3 = v29;
    LOBYTE(v59) = 2;
    if ( v29 )
      std::wstring::wstring(v29);
    else
      v30 = 0;
    LOBYTE(v59) = 0;
    a3 = v30;
    *((float *)v30 + 7) = GetGSeconds();
    *((float *)v30 + 8) = *(float *)(a1 + 732);
    std::wstring::operator=(v30, v53);
    v31 = a4;
    if ( !a4 )
      v31 = (float *)(**(_DWORD **)(a1 + 120) + 180);
    v30[9] = *(_DWORD *)v31;
    v30[10] = *((_DWORD *)v31 + 1);
    v30[11] = *((_DWORD *)v31 + 2);
    v30[12] = *((_DWORD *)v31 + 3);
    *((_BYTE *)v30 + 52) = 0;
    sub_1006FCE0(a1 + 700, &a3);
  }
  while ( *(_DWORD *)(a1 + 696) != -1 )
  {
    v32 = *(_DWORD *)(a1 + 716);
    if ( v32 <= *(_DWORD *)(a1 + 696) )
      break;
    v33 = *(_DWORD *)(a1 + 712);
    if ( v33 > v33 + v32 )
      invalid_parameter_noinfo();
    v34 = v33 >> 2;
    if ( v33 >= *(_DWORD *)(a1 + 712) + *(_DWORD *)(a1 + 716) )
      invalid_parameter_noinfo();
    v35 = *(_DWORD *)(a1 + 708);
    if ( v35 <= v34 )
      v34 -= v35;
    v36 = *(void **)(*(_DWORD *)(*(_DWORD *)(a1 + 704) + 4 * v34) + 4 * (v33 & 3));
    if ( v36 )
    {
      std::wstring::~wstring(v36);
      operator delete(v36);
    }
    v37 = *(_DWORD *)(a1 + 716);
    if ( v37 )
    {
      v38 = *(_DWORD *)(a1 + 708);
      if ( (unsigned int)(4 * v38) <= ++*(_DWORD *)(a1 + 712) )
        *(_DWORD *)(a1 + 712) = 0;
      v39 = v37 - 1;
      *(_DWORD *)(a1 + 716) = v39;
      if ( !v39 )
        *(_DWORD *)(a1 + 712) = 0;
    }
  }
  v40 = *(CREScrollBar **)(a1 + 756);
  if ( v40 )
  {
    v41 = *(_DWORD *)(a1 + 716);
    v42 = *((_DWORD *)v40 + 150);
    *((_DWORD *)v40 + 152) = 0;
    *((_DWORD *)v40 + 153) = v41;
    if ( v42 < 0 || (v43 = *((_DWORD *)v40 + 151), v41 <= v43) )
    {
      *((_DWORD *)v40 + 150) = 0;
    }
    else if ( v43 + v42 > v41 )
    {
      *((_DWORD *)v40 + 150) = v41 - v43;
    }
    CREScrollBar::UpdateThumbRect(v40);
    if ( *(_BYTE *)(a1 + 747) )
    {
      CREScrollBar::SetTrackPos(*(CREScrollBar **)(a1 + 756), *(_DWORD *)(a1 + 716));
    }
    else
    {
      v44 = *(CREScrollBar **)(a1 + 756);
      v45 = *((_DWORD *)v44 + 152);
      *((_DWORD *)v44 + 150) = 0;
      if ( v45 > 0 || (v46 = *((_DWORD *)v44 + 153), v47 = *((_DWORD *)v44 + 151), v46 - v45 <= v47) )
      {
        *((_DWORD *)v44 + 150) = v45;
      }
      else if ( v47 > v46 )
      {
        *((_DWORD *)v44 + 150) = v46 - v47;
      }
      CREScrollBar::UpdateThumbRect(v44);
    }
  }
  v59 = -1;
  std::wstring::~wstring(v53);
}
