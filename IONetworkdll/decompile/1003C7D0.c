/*
 * func-name: ?push_back_stream@Sequence_Container@IONetwork@Outpop@@QAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x1003c7d0
 * callers: 0x1002f880, 0x100440d0
 * callees: 0x10009040, 0x10015a00, 0x100161a0, 0x1003d1f0, 0x1003d940
 */

char __thiscall Outpop::IONetwork::Sequence_Container::push_back_stream(int this, int a2)
{
  int v3; // eax
  int v4; // ebx
  Outpop::Utility::Binary_Stream **v5; // esi
  Outpop::Utility::Binary_Stream **v6; // ebx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  unsigned __int16 sequence_id; // ax
  Outpop::Utility::Ref_Object *v12; // ecx
  Outpop::Utility::Ref_Object *v13; // ecx
  bool v14; // zf
  unsigned __int16 v15; // ax
  Outpop::Utility::Ref_Object *v16; // ecx
  unsigned __int16 v17; // ax
  Outpop::Utility::Ref_Object *v18; // ecx
  int v19; // eax
  int v20; // eax
  unsigned __int16 v21; // ax
  bool v22; // cf
  int v23; // eax
  _BYTE *v24; // ecx
  unsigned __int16 v25; // ax
  int v26; // eax
  unsigned __int16 v27; // ax
  int v28; // eax
  int v30; // [esp+14h] [ebp-78h] BYREF
  int v31; // [esp+18h] [ebp-74h] BYREF
  int v32; // [esp+1Ch] [ebp-70h] BYREF
  Outpop::Utility::Thread_Mutex *v33; // [esp+20h] [ebp-6Ch]
  int v34; // [esp+24h] [ebp-68h]
  _BYTE v35[8]; // [esp+28h] [ebp-64h] BYREF
  _BYTE v36[8]; // [esp+30h] [ebp-5Ch] BYREF
  _BYTE v37[8]; // [esp+38h] [ebp-54h] BYREF
  _BYTE v38[8]; // [esp+40h] [ebp-4Ch] BYREF
  _BYTE v39[8]; // [esp+48h] [ebp-44h] BYREF
  _BYTE v40[8]; // [esp+50h] [ebp-3Ch] BYREF
  _BYTE v41[12]; // [esp+58h] [ebp-34h] BYREF
  _BYTE v42[12]; // [esp+64h] [ebp-28h] BYREF
  _BYTE v43[16]; // [esp+70h] [ebp-1Ch] BYREF
  int v44; // [esp+88h] [ebp-4h]

  v33 = (Outpop::Utility::Thread_Mutex *)(this + 4);
  v3 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 4)) - 1;
  v34 = v3;
  v44 = 0;
  if ( v3 != -1 )
  {
    v4 = a2;
    v5 = *(Outpop::Utility::Binary_Stream ***)(a2 + 4);
    if ( (unsigned int)v5 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    while ( 1 )
    {
      v6 = *(Outpop::Utility::Binary_Stream ***)(v4 + 8);
      if ( *(_DWORD *)(a2 + 4) > (unsigned int)v6 )
        invalid_parameter_noinfo();
      if ( v5 == v6 )
      {
        v44 = -1;
        v34 = -1;
        LOBYTE(v3) = Outpop::Utility::Thread_Mutex::release(v33);
        return v3;
      }
      if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      v7 = Outpop::Utility::Binary_Stream::sequence(*v5);
      if ( !v7 )
        break;
      if ( v7 != 1 )
        goto LABEL_64;
      v8 = a2;
      if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      v9 = Outpop::Utility::Binary_Stream::priority(*v5) - 1;
      if ( v9 )
      {
        v10 = v9 - 2;
        if ( v10 )
        {
          if ( v10 == 2 )
          {
            if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
              invalid_parameter_noinfo();
            sequence_id = Outpop::Utility::Binary_Stream::get_sequence_id(*v5);
            if ( Outpop::IONetwork::CMiddleCircleCompare::IsNew(
                   (Outpop::IONetwork::CMiddleCircleCompare *)(this + 172),
                   *(_WORD *)(this + 28),
                   sequence_id) )
            {
              if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
                invalid_parameter_noinfo();
              v12 = *(Outpop::Utility::Ref_Object **)(this + 160);
              if ( v12 )
                Outpop::Utility::Ref_Object::release(v12);
              v13 = *v5;
              v14 = *v5 == 0;
              *(_DWORD *)(this + 160) = *v5;
              if ( !v14 )
                goto LABEL_42;
            }
          }
        }
        else
        {
          if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
            invalid_parameter_noinfo();
          v15 = Outpop::Utility::Binary_Stream::get_sequence_id(*v5);
          if ( Outpop::IONetwork::CMiddleCircleCompare::IsNew(
                 (Outpop::IONetwork::CMiddleCircleCompare *)(this + 172),
                 *(_WORD *)(this + 30),
                 v15) )
          {
            if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
              invalid_parameter_noinfo();
            v16 = *(Outpop::Utility::Ref_Object **)(this + 164);
            if ( v16 )
              Outpop::Utility::Ref_Object::release(v16);
            v13 = *v5;
            v14 = *v5 == 0;
            *(_DWORD *)(this + 164) = *v5;
            if ( !v14 )
              goto LABEL_42;
          }
        }
      }
      else
      {
        if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v17 = Outpop::Utility::Binary_Stream::get_sequence_id(*v5);
        if ( Outpop::IONetwork::CMiddleCircleCompare::IsNew(
               (Outpop::IONetwork::CMiddleCircleCompare *)(this + 172),
               *(_WORD *)(this + 32),
               v17) )
        {
          if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
            invalid_parameter_noinfo();
          v18 = *(Outpop::Utility::Ref_Object **)(this + 168);
          if ( v18 )
            Outpop::Utility::Ref_Object::release(v18);
          v13 = *v5;
          v14 = *v5 == 0;
          *(_DWORD *)(this + 168) = *v5;
          if ( !v14 )
LABEL_42:
            Outpop::Utility::Ref_Object::addref(v13);
        }
      }
LABEL_65:
      if ( (unsigned int)v5 >= *(_DWORD *)(v8 + 8) )
        invalid_parameter_noinfo();
      v4 = a2;
      ++v5;
    }
    if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    v19 = Outpop::Utility::Binary_Stream::priority(*v5) - 1;
    if ( v19 )
    {
      v20 = v19 - 2;
      if ( v20 )
      {
        if ( v20 != 2 )
        {
LABEL_64:
          v8 = a2;
          goto LABEL_65;
        }
        if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v21 = Outpop::Utility::Binary_Stream::get_sequence_id(*v5);
        v22 = (unsigned int)v5 < *(_DWORD *)(a2 + 8);
        v30 = v21;
        if ( !v22 )
          invalid_parameter_noinfo();
        v23 = sub_1003D940(v38, &v30);
        LOBYTE(v44) = 5;
        sub_100161A0((int)v35, v23);
        LOBYTE(v44) = 6;
        sub_1003D1F0(this + 40, v41, v35);
        LOBYTE(v44) = 5;
        sub_10015A00((int)v35);
        LOBYTE(v44) = 0;
        v24 = v38;
      }
      else
      {
        if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v25 = Outpop::Utility::Binary_Stream::get_sequence_id(*v5);
        v22 = (unsigned int)v5 < *(_DWORD *)(a2 + 8);
        v31 = v25;
        if ( !v22 )
          invalid_parameter_noinfo();
        v26 = sub_1003D940(v39, &v31);
        LOBYTE(v44) = 3;
        sub_100161A0((int)v36, v26);
        LOBYTE(v44) = 4;
        sub_1003D1F0(this + 80, v42, v36);
        LOBYTE(v44) = 3;
        sub_10015A00((int)v36);
        LOBYTE(v44) = 0;
        v24 = v39;
      }
    }
    else
    {
      if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      v27 = Outpop::Utility::Binary_Stream::get_sequence_id(*v5);
      v22 = (unsigned int)v5 < *(_DWORD *)(a2 + 8);
      v32 = v27;
      if ( !v22 )
        invalid_parameter_noinfo();
      v28 = sub_1003D940(v40, &v32);
      LOBYTE(v44) = 1;
      sub_100161A0((int)v37, v28);
      LOBYTE(v44) = 2;
      sub_1003D1F0(this + 120, v43, v37);
      LOBYTE(v44) = 1;
      sub_10015A00((int)v37);
      LOBYTE(v44) = 0;
      v24 = v40;
    }
    sub_10015A00((int)v24);
    goto LABEL_64;
  }
  return v3;
}
