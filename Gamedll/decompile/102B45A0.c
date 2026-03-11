/*
 * func-name: sub_102B45A0
 * func-address: 0x102b45a0
 * callers: 0x10008aad
 * callees: 0x100010f5, 0x1000a3df, 0x1000bb9a, 0x1000c3e2, 0x1000df35, 0x1000e56b, 0x1000f64b, 0x100103a7, 0x100151d1, 0x10015c85, 0x1001675c, 0x1001816a, 0x102ca13e
 */

void __thiscall sub_102B45A0(_DWORD *this, Outpop::Message::Message **a2)
{
  char catalog; // al
  Outpop::Message::Message *v4; // ecx
  CRETimer *v5; // eax
  double AbsoluteTime; // st7
  Engine *v7; // eax
  int readable; // ebx
  int v9; // eax
  CRETimer *v10; // eax
  Engine *v11; // eax
  int v12; // eax
  Outpop::Message::Message *v13; // ecx
  Outpop::Message::Message *v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  Outpop::Utility::Stream_Base *v18; // edi
  Event *v19; // ebx
  char local_id; // al
  int v21; // eax
  char v22; // al
  Outpop::Utility::Stream_Base *v23; // ecx
  int v24; // ebx
  int v25; // eax
  Outpop::Message::Message *v26; // ecx
  int v27; // edi
  int v28; // eax
  Outpop::Message::Message *v29; // edi
  Outpop::Message::Message *v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  Outpop::Utility::Stream_Base *v34; // edi
  Outpop::Utility::Stream_Base *v35; // ecx
  size_t v36; // ebx
  struct BinStream *Stream; // edi
  char v38; // al
  int v39; // eax
  float v40; // [esp+0h] [ebp-48h]
  void *v41; // [esp+0h] [ebp-48h]
  size_t v42; // [esp+4h] [ebp-44h]
  int v43; // [esp+8h] [ebp-40h]
  int v44; // [esp+8h] [ebp-40h]
  int v45; // [esp+8h] [ebp-40h]
  int v46; // [esp+Ch] [ebp-3Ch]
  int v47; // [esp+Ch] [ebp-3Ch]
  double v48; // [esp+18h] [ebp-30h] BYREF
  void *Src[2]; // [esp+20h] [ebp-28h] BYREF
  double v50; // [esp+28h] [ebp-20h] BYREF
  double v51; // [esp+30h] [ebp-18h]
  double v52[2]; // [esp+38h] [ebp-10h] BYREF

  catalog = Outpop::Message::Message::get_catalog(*a2);
  v4 = *a2;
  if ( catalog == 9 )
  {
    if ( (unsigned __int16)Outpop::Message::Message::get_type(v4) == 3051 )
    {
      v50 = 0.0;
      sub_1000BB9A((int)&v50);
      v5 = REGetGlobalTimer();
      AbsoluteTime = CRETimer::GetAbsoluteTime(v5);
      v7 = (Engine *)Engine::Instance(COERCE_UNSIGNED_INT64(v50 - AbsoluteTime));
      Engine::SetAbsTimeDiff(v7);
      return;
    }
    readable = Outpop::Utility::Stream_Base::get_readable(*a2);
    v9 = sub_1000E56B(v43, v46);
    *(_DWORD *)(v9 + 196) += readable;
    ++*(_DWORD *)(v9 + 200);
    *((float *)&v48 + 1) = 0.0;
    sub_10015C85((int)&v48 + 4);
    if ( (unsigned __int16)Outpop::Message::Message::get_type(*a2) == 2001 )
    {
      sub_1000BB9A((int)Src);
      sub_1000BB9A((int)&v50);
      v51 = v50;
      v10 = REGetGlobalTimer();
      v52[0] = CRETimer::GetAbsoluteTime(v10);
      v11 = (Engine *)Engine::Instance(COERCE_UNSIGNED_INT64((v51 - v52[0] + v50 - *(double *)Src) * 0.5));
      Engine::SetAbsTimeDiff(v11);
      v52[0] = (v52[0] - *(double *)Src) * 0.5;
      v12 = sub_1000E56B(v44, v47);
      *(double *)(v12 + 160) = v52[0];
      return;
    }
    sub_1000C3E2();
    sub_100010F5((int)(this + 11));
    sub_1001675C((int)&v50, (int)(this + 11));
    HIDWORD(v52[0]) = this[3];
    if ( !LODWORD(v50) || (_DWORD *)LODWORD(v50) != this + 2 )
      _invalid_parameter_noinfo();
    if ( HIDWORD(v50) == HIDWORD(v52[0]) )
    {
      sub_100103A7((int)v52, (int)(this + 11));
      sub_100151D1((int)(this + 11));
      v13 = *a2;
      Src[0] = (void *)-1;
      if ( !Outpop::Message::Message::get_multi_type(v13) )
      {
        v42 = 1;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v22 = Outpop::Message::Message::get_catalog(v4);
    v23 = *a2;
    if ( v22 == 19 )
    {
      v24 = Outpop::Utility::Stream_Base::get_readable(v23);
      v25 = sub_1000E56B(v43, v46);
      *(_DWORD *)(v25 + 196) += v24;
      ++*(_DWORD *)(v25 + 200);
      *((float *)&v48 + 1) = 0.0;
      sub_10015C85((int)&v48 + 4);
      sub_1000C3E2();
      sub_100010F5((int)(this + 11));
      sub_1001675C((int)&v50, (int)(this + 11));
      HIDWORD(v52[0]) = this[3];
      if ( !LODWORD(v50) || (_DWORD *)LODWORD(v50) != this + 2 )
        _invalid_parameter_noinfo();
      if ( HIDWORD(v50) == HIDWORD(v52[0]) )
      {
        sub_100103A7((int)v52, (int)(this + 11));
        sub_100151D1((int)(this + 11));
        v26 = *a2;
        Src[0] = (void *)-1;
        if ( !Outpop::Message::Message::get_multi_type(v26) )
        {
          v42 = 0;
LABEL_12:
          v14 = *a2;
          v40 = *((float *)&v48 + 1);
          Outpop::Message::Message::get_type(*a2);
          v15 = Outpop::Message::Message::get_catalog(v14);
          v16 = EventAttemper::Instance(v15, LODWORD(v40));
          v17 = EventAttemper::AddEvent(v16);
          v18 = *a2;
          v19 = (Event *)v17;
          Outpop::Utility::Stream_Base::get_readable(*a2);
          Outpop::Utility::Stream_Base::get_read_ptr(v18);
          Event::GetStream(v19);
          sub_1000A3DF(v41, v42);
          local_id = Outpop::Message::Message::get_local_id(*a2);
          v21 = sub_1000F64B(local_id);
          if ( v21 )
            Event::SetOwner(v19, *(_DWORD *)(v21 + 4));
          else
            Event::SetOwner(v19, (unsigned int)Src[0]);
        }
      }
    }
    else
    {
      v27 = Outpop::Utility::Stream_Base::get_readable(v23);
      v28 = sub_1000E56B(v43, v46);
      *(_DWORD *)(v28 + 228) += v27;
      ++*(_DWORD *)(v28 + 232);
      v29 = *a2;
      v30 = *a2;
      LODWORD(v50) = -1;
      Outpop::Message::Message::get_type(v30);
      v31 = Outpop::Message::Message::get_catalog(v29);
      v32 = EventAttemper::Instance(v31, v45);
      v33 = EventAttemper::AddEvent(v32);
      v34 = *a2;
      v35 = *a2;
      HIDWORD(v48) = v33;
      v36 = Outpop::Utility::Stream_Base::get_readable(v35);
      Src[0] = Outpop::Utility::Stream_Base::get_read_ptr(v34);
      Stream = Event::GetStream((Event *)HIDWORD(v48));
      sub_1001816A(v36);
      memcpy((void *)(*((_DWORD *)Stream + 2) + *((_DWORD *)Stream + 1)), Src[0], v36);
      *((_DWORD *)Stream + 2) += v36;
      v38 = Outpop::Message::Message::get_local_id(*a2);
      v39 = sub_1000DF35(v38);
      if ( v39 )
        Event::SetOwner((Event *)HIDWORD(v48), *(_DWORD *)(v39 + 4));
      else
        Event::SetOwner((Event *)HIDWORD(v48), LODWORD(v50));
    }
  }
}
