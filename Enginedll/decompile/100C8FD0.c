/*
 * func-name: ?AddChar@CMultiLineEB@@IAEX_W@Z
 * func-address: 0x100c8fd0
 * callers: 0x100c95f0
 * callees: 0x100a5410, 0x100a5480, 0x100a5620, 0x100a5680, 0x100a57a0, 0x100a57f0, 0x100ae340, 0x100b5280, 0x100b55d0, 0x100ce720, 0x100cef40, 0x100d0000, 0x100d31d0, 0x100d3c30, 0x101a2534
 */

void __thiscall CMultiLineEB::AddChar(CMultiLineEB *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  void *v6; // eax
  CREEditBox::CUniBuffer **v7; // esi
  int v8; // eax
  struct REFontNode *Font; // eax
  int v10; // eax
  int v11; // edi
  CMultiLineEB *v12; // ecx
  CREEditBox::CUniBuffer ***v13; // eax
  CREEditBox::CUniBuffer **v14; // esi
  void **v15; // ecx
  int v16; // edi
  CREEditBox::CUniBuffer *v17; // ecx
  int i; // edi
  int v19; // ecx
  int v20; // ebp
  char *v21; // ecx
  char *v22; // edi
  int v23; // eax
  void (__cdecl *v24)(); // ebp
  int v25; // edx
  unsigned int v26; // esi
  unsigned int k; // ebx
  int v28; // esi
  int v29; // edi
  __int16 v30; // bp
  char *v31; // ebx
  char *v32; // esi
  int v33; // ecx
  char *v34; // edi
  int v35; // esi
  CREEditBox::CUniBuffer *v36; // eax
  int v37; // edi
  int v38; // esi
  char *v39; // ebp
  _WORD *v40; // esi
  CREEditBox::CUniBuffer *v41; // esi
  int v42; // eax
  void *v43; // eax
  CREEditBox::CUniBuffer **v44; // edi
  int v45; // eax
  int v46; // esi
  int v47; // ebx
  struct CREDialogResourceManager *v48; // eax
  int v49; // esi
  unsigned int j; // ebp
  CREEditBox::CUniBuffer *v51; // esi
  int v52; // edi
  __int16 v53; // bx
  int v55; // [esp+8h] [ebp-3Ch] BYREF
  CREEditBox::CUniBuffer **v56; // [esp+Ch] [ebp-38h]
  int v57; // [esp+10h] [ebp-34h] BYREF
  int v58; // [esp+14h] [ebp-30h] BYREF
  void *v59; // [esp+18h] [ebp-2Ch]
  int v60; // [esp+1Ch] [ebp-28h] BYREF
  int v61[2]; // [esp+20h] [ebp-24h] BYREF
  int v62; // [esp+28h] [ebp-1Ch] BYREF
  void *Destination; // [esp+2Ch] [ebp-18h]
  void *Source; // [esp+30h] [ebp-14h]
  int v65; // [esp+34h] [ebp-10h]
  int v66; // [esp+40h] [ebp-4h]

  if ( (_WORD)a2 != 13 )
  {
    v3 = *((_DWORD *)this + 224);
    if ( v3 )
      v4 = (*((_DWORD *)this + 225) - v3) >> 2;
    else
      v4 = 0;
    v5 = *((_DWORD *)this + 204);
    if ( v4 > v5 )
    {
      v13 = (CREEditBox::CUniBuffer ***)sub_100CEF40(v5);
      v14 = *v13;
      CREEditBox::CUniBuffer::InsertChar(**v13, *((_DWORD *)this + 187), a2);
      ++*((_DWORD *)this + 187);
      v58 = 0;
      if ( CREEditBox::CUniBuffer::CPtoX(*v14, *((_DWORD *)*v14 + 2), (int *)1, &v58) >= 0
        && v58 > *((_DWORD *)this + 143) - *((_DWORD *)this + 141) )
      {
        v56 = (CREEditBox::CUniBuffer **)*((_DWORD *)this + 204);
        Destination = 0;
        Source = 0;
        v65 = 0;
        v15 = (void **)*v14;
        v66 = 1;
        v60 = *((_DWORD *)this + 143) - *((_DWORD *)this + 141);
        v16 = v60;
        v57 = 0;
        a2 = 0;
        if ( CREEditBox::CUniBuffer::XtoCP(v15, v60, &a2, &v57) < 0 )
        {
          v66 = -1;
          sub_100D0000(&v62);
          return;
        }
        v17 = *v14;
        v55 = 0;
        CREEditBox::CUniBuffer::CPtoX(v17, a2, (int *)1, &v55);
        if ( v55 > v16 )
          --a2;
        for ( i = *((_DWORD *)*v14 + 2) - 1; i > a2; --i )
        {
          v19 = *(_DWORD *)*v14;
          *((_BYTE *)*v14 + 16) = 1;
          v20 = v19 + 2 * i;
          v59 = Destination;
          if ( Destination > Source )
            invalid_parameter_noinfo();
          sub_100D31D0((int)v61, (int)&v62, v59, v20);
          CREEditBox::CUniBuffer::RemoveChar(*v14, i);
        }
        v21 = (char *)Destination;
        v22 = (char *)Source;
        if ( Destination )
        {
          v23 = ((_BYTE *)Source - (_BYTE *)Destination) >> 1;
          if ( v23 )
          {
            ++*((_DWORD *)this + 204);
            *((_DWORD *)this + 187) = v23;
          }
        }
        v24 = invalid_parameter_noinfo;
        while ( v21 && (v22 - v21) >> 1 )
        {
          v25 = *((_DWORD *)this + 224);
          v26 = (unsigned int)v56 + 1;
          v56 = (CREEditBox::CUniBuffer **)((char *)v56 + 1);
          if ( !v25 || (*((_DWORD *)this + 225) - v25) >> 2 <= v26 )
          {
            v43 = operator new(0x10u);
            v60 = (int)v43;
            LOBYTE(v66) = 2;
            if ( v43 )
            {
              v44 = (CREEditBox::CUniBuffer **)sub_100CE720(v43);
              v56 = v44;
            }
            else
            {
              v44 = 0;
              v56 = 0;
            }
            v45 = **((_DWORD **)this + 30);
            LOBYTE(v66) = 1;
            v60 = (int)v44;
            if ( v45 )
            {
              v46 = *(_DWORD *)(v45 + 4);
              v47 = *((_DWORD *)this + 28);
              v48 = REGetGlobalDialogResourceManager();
              if ( v48 )
              {
                v49 = *(_DWORD *)(*(_DWORD *)(v47 + 752) + 4 * v46);
                v48 = *(struct CREDialogResourceManager **)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v49);
              }
              *((_DWORD *)*v44 + 3) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)v48 + 130) + 32))(*((_DWORD *)v48 + 130));
              CREEditBox::CUniBuffer::Analyse(*v44);
            }
            for ( j = 0; Destination && j < ((_BYTE *)Source - (_BYTE *)Destination) >> 1; ++j )
            {
              v51 = *v56;
              v52 = *((_DWORD *)*v56 + 2);
              v53 = *((_WORD *)Destination + j);
              if ( v52 + 1 < *((_DWORD *)*v56 + 1) || CREEditBox::CUniBuffer::Grow(*v56) )
              {
                memmove(
                  (void *)(*(_DWORD *)v51 + 2 * v52 + 2),
                  (const void *)(*(_DWORD *)v51 + 2 * v52),
                  2 * (*((_DWORD *)v51 + 2) - v52) + 2);
                *(_WORD *)(*(_DWORD *)v51 + 2 * v52) = v53;
                ++*((_DWORD *)v51 + 2);
                *((_BYTE *)v51 + 16) = 1;
              }
            }
            sub_100D3C30((int)this + 892, (int)&v60);
            CMultiLineEB::adjustPage(this);
            v66 = -1;
            if ( Destination )
              std::allocator<wchar_t>::deallocate(&v62, Destination, (v65 - (int)Destination) >> 1);
            return;
          }
          v55 = *(_DWORD *)(*((_DWORD *)this + 224) + 4 * v26);
          for ( k = 0; v21 && k < (v22 - v21) >> 1; ++k )
          {
            v28 = *(_DWORD *)v55;
            v29 = *(_DWORD *)(*(_DWORD *)v55 + 8);
            v30 = *(_WORD *)&v21[2 * k];
            if ( v29 + 1 < *(_DWORD *)(*(_DWORD *)v55 + 4)
              || CREEditBox::CUniBuffer::Grow(*(CREEditBox::CUniBuffer **)v55) )
            {
              memmove(
                (void *)(*(_DWORD *)v28 + 2 * v29 + 2),
                (const void *)(*(_DWORD *)v28 + 2 * v29),
                2 * (*(_DWORD *)(v28 + 8) - v29) + 2);
              *(_WORD *)(*(_DWORD *)v28 + 2 * v29) = v30;
              ++*(_DWORD *)(v28 + 8);
              *(_BYTE *)(v28 + 16) = 1;
            }
            v21 = (char *)Destination;
            v24 = invalid_parameter_noinfo;
            v22 = (char *)Source;
          }
          v31 = v22;
          if ( v21 > v22 )
          {
            v24();
            v21 = (char *)Destination;
            v22 = (char *)Source;
          }
          v32 = v21;
          if ( v21 > v22 )
          {
            v24();
            v22 = (char *)Source;
          }
          if ( v32 != v31 )
          {
            v33 = (v22 - v31) >> 1;
            v34 = &v32[2 * v33];
            if ( v33 > 0 )
              memmove_s(v32, 2 * v33, v31, 2 * v33);
            Source = v34;
          }
          v35 = v55;
          if ( CREEditBox::CUniBuffer::XtoCP(*(void ***)v55, v60, &a2, &v57) >= 0 )
          {
            if ( !v57 )
              --a2;
            v36 = *(CREEditBox::CUniBuffer **)v35;
            v37 = a2 + 1;
            if ( a2 + 1 < *(_DWORD *)(*(_DWORD *)v35 + 8) )
            {
              do
              {
                v38 = *(_DWORD *)v36;
                *((_BYTE *)v36 + 16) = 1;
                v39 = (char *)Source;
                v40 = (_WORD *)(2 * v37 + v38);
                if ( Destination
                  && ((_BYTE *)Source - (_BYTE *)Destination) >> 1 < (unsigned int)((v65 - (int)Destination) >> 1) )
                {
                  *(_WORD *)Source = *v40;
                  Source = v39 + 2;
                }
                else
                {
                  if ( Destination > Source )
                    invalid_parameter_noinfo();
                  sub_100D31D0((int)v61, (int)&v62, v39, (int)v40);
                }
                v41 = *(CREEditBox::CUniBuffer **)v55;
                v42 = *(_DWORD *)(*(_DWORD *)v55 + 8);
                if ( v42 && v37 >= 0 && v37 < v42 )
                {
                  memmove(
                    (void *)(2 * v37 + *(_DWORD *)v41),
                    (const void *)(2 * v37 + *(_DWORD *)v41 + 2),
                    2 * (v42 - v37));
                  --*((_DWORD *)v41 + 2);
                  *((_BYTE *)v41 + 16) = 1;
                }
                v36 = *(CREEditBox::CUniBuffer **)v55;
                ++v37;
              }
              while ( v37 < *(_DWORD *)(*(_DWORD *)v55 + 8) );
              v24 = invalid_parameter_noinfo;
            }
          }
          v22 = (char *)Source;
          v21 = (char *)Destination;
        }
        v66 = -1;
        if ( v21 )
          std::allocator<wchar_t>::deallocate(&v62, v21, (v65 - (int)v21) >> 1);
      }
      v12 = this;
    }
    else
    {
      v6 = operator new(0x10u);
      v60 = (int)v6;
      v66 = 0;
      if ( v6 )
        v7 = (CREEditBox::CUniBuffer **)sub_100CE720(v6);
      else
        v7 = 0;
      v8 = **((_DWORD **)this + 30);
      v66 = -1;
      v57 = (int)v7;
      if ( v8 )
      {
        Font = CREDialog::GetFont(*((CREDialog **)this + 28), *(_DWORD *)(v8 + 4));
        *((_DWORD *)*v7 + 3) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
        CREEditBox::CUniBuffer::Analyse(*v7);
      }
      CREEditBox::CUniBuffer::InsertChar(*v7, *((_DWORD *)*v7 + 2), a2);
      sub_100D3C30((int)this + 892, (int)&v57);
      v10 = *((_DWORD *)this + 224);
      if ( v10 )
        v11 = (*((_DWORD *)this + 225) - v10) >> 2;
      else
        v11 = 0;
      *((_DWORD *)this + 204) = v11 - 1;
      *((_DWORD *)this + 187) = *((_DWORD *)*v7 + 2);
      v12 = this;
    }
    CMultiLineEB::adjustPage(v12);
  }
}
