/*
 * func-name: ?Tick@SubareaManager@@QAEXXZ
 * func-address: 0x1015c210
 * callers: none
 * callees: 0x10055320, 0x100e2550, 0x10137000, 0x101381e0, 0x1013a940, 0x1015c160, 0x1015c900, 0x101a26c0
 */

void __thiscall SubareaManager::Tick(World **this)
{
  SubareaManager *v1; // ebp
  int v2; // esi
  char *v3; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // ebx
  bool v6; // cc
  unsigned int LoadState; // ebp
  void (__cdecl *v8)(); // ebp
  bool v9; // cf
  void *v10; // eax
  struct Actor **v11; // eax
  int v12; // ecx
  int v13; // edx
  _DWORD **v14; // ecx
  unsigned int i; // esi
  struct TextureManager *v16; // eax
  int v17; // edx
  char *v18; // eax
  unsigned int v19; // esi
  unsigned int v20; // edx
  int v21; // eax
  unsigned int ThrdAddr; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v24[2]; // [esp+18h] [ebp-8h] BYREF

  v1 = (SubareaManager *)this;
  if ( this[7] && this[6] )
  {
    if ( hObject )
      Sleep(1u);
    v2 = *((_DWORD *)v1 + 6);
    *((_DWORD *)v1 + 15) = (int)(*(float *)(v2 + 352) - *((float *)v1 + 9));
    *((_DWORD *)v1 + 17) = (int)(*(float *)(v2 + 352) + *((float *)v1 + 9));
    *((_DWORD *)v1 + 16) = (int)(*(float *)(v2 + 360) - *((float *)v1 + 9));
    *((_DWORD *)v1 + 18) = (int)(*(float *)(v2 + 360) + *((float *)v1 + 9));
    *((_DWORD *)v1 + 11) = (int)(*(float *)(v2 + 352) - *((float *)v1 + 10));
    *((_DWORD *)v1 + 13) = (int)(*(float *)(v2 + 352) + *((float *)v1 + 10));
    *((_DWORD *)v1 + 12) = (int)(*(float *)(v2 + 360) - *((float *)v1 + 10));
    v3 = (char *)v1 + 4;
    *((_DWORD *)v1 + 14) = (int)(*(float *)(v2 + 360) + *((float *)v1 + 10));
    v4 = (_DWORD *)*((_DWORD *)v1 + 2);
    if ( (unsigned int)v4 > *((_DWORD *)v1 + 3) )
      invalid_parameter_noinfo();
    v24[0] = (char *)v1 + 4;
    while ( 1 )
    {
      v5 = (_DWORD *)*((_DWORD *)v3 + 2);
      v6 = *((_DWORD *)v3 + 1) <= (unsigned int)v5;
      v24[1] = v4;
      if ( !v6 )
        invalid_parameter_noinfo();
      if ( v4 == v5 )
        break;
      if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
      {
        invalid_parameter_noinfo();
        if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
          invalid_parameter_noinfo();
      }
      LoadState = SubareaManager::GetLoadState((int)v1, (float *)v4 + 5, (float *)v4 + 8);
      if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
        invalid_parameter_noinfo();
      if ( v4[19] == 1 )
      {
        v8 = invalid_parameter_noinfo;
        if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
          invalid_parameter_noinfo();
        InterlockedDecrement(v4 + 19);
        CloseHandle(hObject);
        v9 = (unsigned int)v4 < *((_DWORD *)v3 + 2);
        hObject = 0;
        if ( !v9 )
          invalid_parameter_noinfo();
        if ( *v4 )
        {
          if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
            invalid_parameter_noinfo();
          World::AddActor(this[7], (struct Actor *)*v4);
          if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
            invalid_parameter_noinfo();
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v4 + 60))(*v4);
          if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
            invalid_parameter_noinfo();
          *((float *)v4 + 18) = 0.0;
        }
      }
      else
      {
        if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
          invalid_parameter_noinfo();
        if ( *v4 || hObject || LoadState > 1 )
        {
          if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
            invalid_parameter_noinfo();
          if ( *v4 && LoadState == 2 )
          {
            if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
              invalid_parameter_noinfo();
            if ( *((float *)v4 + 18) > 10.0 && !hObject )
            {
              v11 = (struct Actor **)sub_1015C900(v24);
              World::RemoveActor(this[7], *v11);
              if ( *(_DWORD *)sub_1015C900(v24) )
              {
                v12 = *(_DWORD *)sub_1015C900(v24);
                if ( v12 )
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 80))(v12, 1);
                *(_DWORD *)sub_1015C900(v24) = 0;
              }
              *(_DWORD *)sub_1015C900(v24) = 0;
            }
          }
        }
        else
        {
          if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
            invalid_parameter_noinfo();
          v10 = (void *)beginthreadex(0, 0, StartAddress, v4, 0, &ThrdAddr);
          hObject = v10;
          if ( !LoadState )
            WaitForSingleObject(v10, 0x493E0u);
        }
        v8 = invalid_parameter_noinfo;
      }
      if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
        v8();
      if ( *v4 )
      {
        if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
          v8();
        *((float *)v4 + 18) = *((float *)v4 + 18) + GDeltaTime;
      }
      if ( (unsigned int)v4 >= *((_DWORD *)v3 + 2) )
        v8();
      v1 = (SubareaManager *)this;
      v4 += 20;
    }
    if ( !hObject && *((_BYTE *)BatchRenderer::Instance() + 1045) )
    {
      v13 = dword_11240D94;
      v14 = (_DWORD **)dword_11240D90;
      for ( i = 0; v14 && i < (v13 - (int)v14) >> 2; ++i )
      {
        if ( GSeconds - *((float *)v14[i] + 5) > 5.0 )
        {
          if ( i >= (v13 - (int)v14) >> 2 )
          {
            invalid_parameter_noinfo();
            v14 = (_DWORD **)dword_11240D90;
          }
          (*(void (__thiscall **)(_DWORD *))(*v14[i] + 156))(v14[i]);
          v13 = dword_11240D94;
          v14 = (_DWORD **)dword_11240D90;
          --i;
        }
      }
    }
    v16 = TextureManager::Instance();
    v17 = *((_DWORD *)v16 + 16);
    v18 = (char *)v16 + 60;
    if ( v17 )
    {
      v20 = (int)((unsigned __int64)(2290649225LL * (*((_DWORD *)v18 + 2) - v17)) >> 32) >> 5;
      v19 = v20 + (v20 >> 31);
    }
    else
    {
      v19 = 0;
    }
    if ( dword_11240DA4 )
      v21 = (dword_11240DA8 - (int)dword_11240DA4) >> 2;
    else
      v21 = 0;
    LogPrintf("*** Models: %d", v21);
    LogPrintf("*** Textures: %d", v19);
  }
}
