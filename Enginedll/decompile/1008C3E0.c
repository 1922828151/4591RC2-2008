/*
 * func-name: ?HandleSelections@Editor@@QAEXXZ
 * func-address: 0x1008c3e0
 * callers: 0x1008ce00
 * callees: 0x10001370, 0x1000b5c0, 0x1000f2e0, 0x10012a30, 0x10019470, 0x10035de0, 0x10076ef0, 0x1007e920, 0x1007eed0, 0x1007f3a0, 0x1007f560, 0x1007f750, 0x1007fa00, 0x10082690, 0x10082740, 0x10084120, 0x10085cc0, 0x1008bd00, 0x10091b60, 0x100971c0, 0x1009eed0, 0x100db0e0, 0x100db190, 0x100db2a0, 0x100ee930, 0x1010fea0, 0x1017a0b0, 0x101a2500
 */

void __thiscall Editor::HandleSelections(Editor *this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // edi
  bool v10; // bl
  double v11; // st7
  double v12; // st7
  unsigned int i; // edi
  int v14; // ecx
  int v15; // edx
  _DWORD *v16; // ecx
  int v17; // eax
  _DWORD *v18; // ecx
  bool v19; // zf
  int v20; // eax
  struct BBox *WorldBBox; // eax
  bool v22; // bl
  int *v23; // eax
  float *v24; // eax
  float v25; // ecx
  float v26; // edx
  float v27; // eax
  int *v28; // eax
  struct Editor::Undo *v29; // eax
  struct Actor *UnderMouse; // eax
  unsigned int v31; // edi
  struct Actor **v32; // ecx
  int v33; // ebp
  unsigned int v34; // eax
  struct Actor **v35; // eax
  struct Engine *v36; // eax
  bool v37; // c0
  bool v38; // c3
  float *v39; // eax
  _DWORD v40[4]; // [esp-40h] [ebp-180h] BYREF
  char v41; // [esp-30h] [ebp-170h]
  int v42; // [esp-2Ch] [ebp-16Ch]
  int v43; // [esp-28h] [ebp-168h]
  char v44; // [esp-24h] [ebp-164h]
  int v45; // [esp-20h] [ebp-160h]
  int v46; // [esp-1Ch] [ebp-15Ch]
  float *v47; // [esp-18h] [ebp-158h]
  float *v48; // [esp-14h] [ebp-154h]
  int v49; // [esp+0h] [ebp-140h] BYREF
  bool v50; // [esp+7h] [ebp-139h]
  float v51; // [esp+8h] [ebp-138h] BYREF
  int v52; // [esp+Ch] [ebp-134h]
  float v53; // [esp+10h] [ebp-130h]
  LONG v54; // [esp+14h] [ebp-12Ch]
  int v55; // [esp+18h] [ebp-128h] BYREF
  void *v56; // [esp+1Ch] [ebp-124h]
  int v57; // [esp+20h] [ebp-120h]
  int v58; // [esp+24h] [ebp-11Ch]
  LONG v59; // [esp+28h] [ebp-118h]
  float v60; // [esp+2Ch] [ebp-114h] BYREF
  LONG v61; // [esp+30h] [ebp-110h]
  float v62; // [esp+34h] [ebp-10Ch]
  struct tagRECT Rect; // [esp+38h] [ebp-108h] BYREF
  float v64[3]; // [esp+48h] [ebp-F8h] BYREF
  float v65[3]; // [esp+54h] [ebp-ECh] BYREF
  float v66[3]; // [esp+60h] [ebp-E0h] BYREF
  float v67[3]; // [esp+6Ch] [ebp-D4h] BYREF
  _BYTE v68[16]; // [esp+78h] [ebp-C8h] BYREF
  float v69; // [esp+88h] [ebp-B8h]
  float v70; // [esp+8Ch] [ebp-B4h]
  float v71; // [esp+90h] [ebp-B0h]
  float v72; // [esp+94h] [ebp-ACh]
  float v73; // [esp+98h] [ebp-A8h]
  float v74; // [esp+9Ch] [ebp-A4h]
  float v75[10]; // [esp+A0h] [ebp-A0h] BYREF
  _BYTE v76[108]; // [esp+C8h] [ebp-78h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v77; // [esp+134h] [ebp-Ch]
  void *v78; // [esp+138h] [ebp-8h]
  int v79; // [esp+13Ch] [ebp-4h]

  v79 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v78 = &loc_101AB655;
  v77 = ExceptionList;
  if ( *((_DWORD *)this + 520) != 1 && flt_10285770 >= 0.1000000014901161 )
  {
    if ( !*((_BYTE *)this + 2074) || *((_BYTE *)this + 2121) )
    {
      *((_BYTE *)this + 2121) = 0;
LABEL_77:
      *((_BYTE *)this + 2073) = 0;
      return;
    }
    if ( *((_BYTE *)this + 2108)
      && Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 9), 0)
      && std::vector<Model *>::size((_DWORD *)this + 561)
      && *(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 561, 0) + 716)
      && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 561, 0) + 716) + 308) )
    {
      v49 = *((float *)this + 517);
      v51 = *((float *)this + 516);
      *(float *)&v52 = v49;
      v53 = 0.0;
      Editor::Unproject((int)this, v65, SLOBYTE(v51), SLODWORD(v49), COERCE_INT(0.0));
      v49 = *((float *)this + 517);
      v51 = *((float *)this + 516);
      *(float *)&v52 = v49;
      v53 = 1.0;
      Editor::Unproject((int)this, v64, SLOBYTE(v51), SLODWORD(v49), COERCE_INT(1.0));
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v79 = 0;
      std::vector<Model *>::operator[]((_DWORD *)this + 561, 0);
      ModelFrame::EnumerateFrames(&v55);
      v3 = std::vector<Model *>::operator[]((_DWORD *)this + 561, 0);
      StaticModel::GetWorldBBox(*(_DWORD *)(*(_DWORD *)v3 + 716), v68);
      LOBYTE(v79) = 1;
      v49 = v72 - v69;
      v49 = fabs(v49);
      *(float *)&v59 = v49;
      v49 = v73 - v70;
      v49 = fabs(v49);
      *(float *)&v54 = v49;
      v4 = v56;
      v5 = v57;
      v49 = v74 - v71;
      v49 = fabs(v49);
      if ( v56 )
        v6 = (v57 - (int)v56) >> 2;
      else
        v6 = 0;
      *(float *)&v59 = *(float *)&v59 / (double)(unsigned int)(2 * v6);
      if ( v56 )
        v7 = (v57 - (int)v56) >> 2;
      else
        v7 = 0;
      *(float *)&v54 = *(float *)&v54 / (double)(unsigned int)(2 * v7);
      if ( v56 )
        v8 = (v57 - (int)v56) >> 2;
      else
        v8 = 0;
      v9 = 0;
      v49 = v49 / (double)(unsigned int)(2 * v8);
      while ( v4 && v9 < (v5 - (int)v4) >> 2 )
      {
        v51 = -*(float *)&v59;
        *(float *)&v52 = -*(float *)&v54;
        v53 = -v49;
        std::vector<Model *>::operator[](&v55, v9);
        sub_10035DE0(v67, (int)&v51);
        Rect.left = v59;
        Rect.top = v54;
        *(float *)&Rect.right = v49;
        std::vector<Model *>::operator[](&v55, v9);
        sub_10035DE0(v66, (int)&Rect);
        sub_10001370(v75, v67, v66);
        v48 = v64;
        v47 = v65;
        v60 = COERCE_FLOAT(v40);
        LOBYTE(v79) = 2;
        sub_1000B5C0(v40, v75);
        if ( Editor::CheckBox(
               v40[0],
               v40[1],
               v40[2],
               v40[3],
               v41,
               v42,
               v43,
               v44,
               v45,
               v46,
               *(float *)&v47,
               *(float *)&v48)
          && *((_DWORD *)this + 526) != *(_DWORD *)std::vector<Model *>::operator[](&v55, v9) )
        {
          *((_DWORD *)this + 526) = *(_DWORD *)std::vector<Model *>::operator[](&v55, v9);
          LOBYTE(v79) = 1;
          sub_1017A0B0(v75);
          LOBYTE(v79) = 0;
          sub_1017A0B0(v68);
          std::vector<AttributeRange>::_Tidy(&v55);
          return;
        }
        LOBYTE(v79) = 1;
        sub_1017A0B0(v75);
        v5 = v57;
        v4 = v56;
        ++v9;
      }
      LOBYTE(v79) = 0;
      sub_1017A0B0(v68);
      v79 = -1;
      std::vector<AttributeRange>::_Tidy(&v55);
    }
    v10 = 0;
    if ( *((_BYTE *)this + 2073) && Input::ControlJustReleased(*((Input **)this + 1), *((_DWORD *)this + 9), 0) )
    {
      v49 = *((float *)this + 535);
      v11 = *((float *)this + 534);
      *((_BYTE *)this + 2073) = 0;
      v51 = v11;
      *(float *)&v52 = v49;
      v53 = 0.0;
      Editor::Unproject((int)this, v67, SLOBYTE(v51), SLODWORD(v49), COERCE_INT(0.0));
      v49 = *((float *)this + 535);
      v51 = *((float *)this + 534);
      *(float *)&v52 = v49;
      v53 = 1.0;
      Editor::Unproject((int)this, v66, SLOBYTE(v51), SLODWORD(v49), COERCE_INT(1.0));
      v49 = *((float *)this + 517);
      v51 = *((float *)this + 516);
      *(float *)&v52 = v49;
      v53 = 0.0;
      Editor::Unproject((int)this, v64, SLOBYTE(v51), SLODWORD(v49), COERCE_INT(0.0));
      v49 = *((float *)this + 517);
      v51 = *((float *)this + 516);
      *(float *)&v52 = v49;
      v53 = 1.0;
      Editor::Unproject((int)this, v65, SLOBYTE(v51), SLODWORD(v49), COERCE_INT(1.0));
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v12 = *((float *)this + 534) - *((float *)this + 516);
      v79 = 3;
      v49 = v12;
      *(float *)&v54 = *((float *)this + 535) - *((float *)this + 517);
      v60 = v49;
      v61 = v54;
      if ( sub_1007E920(&v60) > 6.0 )
      {
        v50 = 1;
        for ( i = 0; ; ++i )
        {
          while ( 1 )
          {
            v14 = *((_DWORD *)this + 512);
            v15 = *(_DWORD *)(v14 + 3224);
            v16 = (_DWORD *)(v14 + 3220);
            if ( !v15 || i >= (v16[2] - v15) >> 2 )
            {
              v10 = v50;
              goto LABEL_44;
            }
            if ( !*(_BYTE *)(*(_DWORD *)std::vector<Model *>::operator[](v16, i) + 816)
              && !*(_BYTE *)(*(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)(*((_DWORD *)this + 512) + 3220), i)
                           + 817) )
            {
              break;
            }
LABEL_42:
            ++i;
          }
          v17 = std::vector<Model *>::operator[]((_DWORD *)(*((_DWORD *)this + 512) + 3220), i);
          v18 = (_DWORD *)(*((_DWORD *)this + 512) + 3220);
          v19 = *(_DWORD *)(*(_DWORD *)v17 + 716) == 0;
          v48 = (float *)i;
          if ( v19 )
          {
            if ( !*(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[](v18, (unsigned int)v48) + 716) )
            {
              v24 = *(float **)std::vector<Model *>::operator[]((_DWORD *)(*((_DWORD *)this + 512) + 3220), i);
              v25 = v24[214];
              v26 = v24[215];
              v27 = v24[216];
              v51 = v25;
              *(float *)&v52 = v26;
              v53 = v27;
              *(float *)&Rect.left = v25 + 0.5;
              *(float *)&Rect.top = v26 + 0.5;
              *(float *)&Rect.right = v27 + 0.5;
              v60 = v25 - 0.5;
              *(float *)&v61 = v26 - 0.5;
              v62 = v27 - 0.5;
              sub_10001370(v75, &v60, (float *)&Rect.left);
              LOBYTE(v79) = 5;
              if ( Editor::CheckDragBox(this, (struct BBox *)v75) )
              {
                v28 = (int *)std::vector<Model *>::operator[]((_DWORD *)(*((_DWORD *)this + 512) + 3220), i);
                std::vector<Actor *>::push_back(&v55, v28);
              }
              LOBYTE(v79) = 3;
              sub_1017A0B0(v75);
            }
            goto LABEL_42;
          }
          v20 = std::vector<Model *>::operator[](v18, (unsigned int)v48);
          WorldBBox = (struct BBox *)StaticModel::GetWorldBBox(*(_DWORD *)(*(_DWORD *)v20 + 716), v75);
          LOBYTE(v79) = 4;
          v22 = Editor::CheckDragBox(this, WorldBBox);
          LOBYTE(v79) = 3;
          sub_1017A0B0(v75);
          if ( !v22 )
            goto LABEL_42;
          v23 = (int *)std::vector<Model *>::operator[]((_DWORD *)(*((_DWORD *)this + 512) + 3220), i);
          std::vector<Actor *>::push_back(&v55, v23);
        }
      }
LABEL_44:
      v50 = Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 10), 0);
      if ( !v50 && std::vector<Model *>::size((_DWORD *)this + 561) )
      {
        v29 = (struct Editor::Undo *)sub_10091B60((char *)this + 2244, 2);
        LOBYTE(v79) = 6;
        Editor::PushUndo(this, v29);
        LOBYTE(v79) = 3;
        sub_1000F2E0((int)v76);
        *((_BYTE *)this + 2060) = 1;
        Editor::UnSelectAll(this);
        Editor::RestoreEditor(this);
      }
      if ( !v10 )
      {
        if ( *((_BYTE *)this + 2072) )
        {
          UnderMouse = Editor::GetUnderMouse(
                         this,
                         *((struct World **)this + 512),
                         (struct Vector *)v64,
                         (struct Vector *)v65,
                         1);
          v49 = *(float *)&UnderMouse;
          if ( UnderMouse )
          {
            if ( !*((_BYTE *)UnderMouse + 817)
              && (!*((_BYTE *)UnderMouse + 816)
               || (*(unsigned __int8 (__thiscall **)(struct Actor *))(*(_DWORD *)UnderMouse + 40))(UnderMouse)) )
            {
              std::vector<Actor *>::push_back(&v55, (int *)&v49);
            }
          }
        }
      }
      v31 = 0;
      while ( 1 )
      {
        v32 = (struct Actor **)v56;
        if ( !v56 )
          break;
        v33 = v57;
        v34 = (v57 - (int)v56) >> 2;
        if ( v31 >= v34 )
          break;
        if ( !v50 )
          goto LABEL_63;
        if ( v31 >= v34 )
        {
          invalid_parameter_noinfo();
          v33 = v57;
          v32 = (struct Actor **)v56;
        }
        if ( *((_BYTE *)v32[v31] + 441) )
        {
          v35 = (struct Actor **)std::vector<Model *>::operator[](&v55, v31);
          Editor::UnSelectActor(this, *v35);
          ++v31;
        }
        else
        {
LABEL_63:
          if ( !v32 || v31 >= (v33 - (int)v32) >> 2 )
          {
            invalid_parameter_noinfo();
            v32 = (struct Actor **)v56;
          }
          Editor::SelectActor(this, v32[v31++]);
        }
      }
      v79 = -1;
      if ( v56 )
        operator delete(v56);
    }
    if ( Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 9), 0) )
    {
      v36 = Engine::Instance();
      GetClientRect(*((HWND *)v36 + 35), &Rect);
      v37 = *((float *)this + 516) > 0.0;
      v38 = 0.0 == *((float *)this + 516);
      *((_BYTE *)this + 2072) = 1;
      if ( !v37 && !v38
        || (double)Rect.right < *((float *)this + 516)
        || *((float *)this + 517) < 0.0
        || (double)Rect.bottom < *((float *)this + 517) )
      {
        *((_BYTE *)this + 2072) = 0;
      }
      if ( *((_BYTE *)this + 2072) )
      {
        v39 = sub_1007EED0(&v60);
        *((float *)this + 534) = *v39;
        *((float *)this + 535) = v39[1];
        *((_BYTE *)this + 2073) = 1;
        return;
      }
      goto LABEL_77;
    }
  }
}
