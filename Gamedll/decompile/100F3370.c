/*
 * func-name: ?Tick@AdapterActor@GameClient@@UAEXXZ_0
 * func-address: 0x100f3370
 * callers: 0x10005231
 * callees: 0x1000298c, 0x10005bd2, 0x1000df7b, 0x1001518b, 0x100157d5, 0x100193c1, 0x1001a0c3, 0x102c0750, 0x102c1270, 0x102c2120, 0x102c26d0, 0x102c9ea2
 */

void __thiscall GameClient::AdapterActor::Tick(float ***this)
{
  float *i; // ebx
  float v3; // esi
  float **v4; // edi
  int v5; // esi
  double v6; // st6
  int v7; // eax
  float **v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  Event *v12; // esi
  double v13; // st7
  double v14; // st6
  int v15; // eax
  float **v16; // eax
  int v17; // eax
  Event *v18; // esi
  bool v19; // al
  int v20; // eax
  Event *v21; // eax
  int v22; // [esp+50h] [ebp-1D4h]
  int v23; // [esp+50h] [ebp-1D4h]
  int v24; // [esp+54h] [ebp-1D0h]
  int v25; // [esp+54h] [ebp-1D0h]
  int v26; // [esp+58h] [ebp-1CCh]
  struct tagRECT v27; // [esp+58h] [ebp-1CCh]
  int v28; // [esp+58h] [ebp-1CCh]
  struct tagRECT v29; // [esp+58h] [ebp-1CCh]
  int v30; // [esp+5Ch] [ebp-1C8h]
  int v31; // [esp+5Ch] [ebp-1C8h]
  int v32; // [esp+60h] [ebp-1C4h]
  int v33; // [esp+60h] [ebp-1C4h]
  int v34; // [esp+64h] [ebp-1C0h]
  int v35; // [esp+64h] [ebp-1C0h]
  char v36; // [esp+64h] [ebp-1C0h]
  int v37; // [esp+64h] [ebp-1C0h]
  int v38; // [esp+68h] [ebp-1BCh]
  int v39; // [esp+68h] [ebp-1BCh]
  float v40; // [esp+7Ch] [ebp-1A8h]
  LONG v41; // [esp+7Ch] [ebp-1A8h]
  LONG v42; // [esp+7Ch] [ebp-1A8h]
  float v43; // [esp+80h] [ebp-1A4h] BYREF
  int v44; // [esp+84h] [ebp-1A0h]
  struct tagRECT rc; // [esp+88h] [ebp-19Ch] BYREF
  LONG v46; // [esp+98h] [ebp-18Ch]
  struct tagRECT v47; // [esp+9Ch] [ebp-188h] BYREF
  _BYTE v48[4]; // [esp+B8h] [ebp-16Ch] BYREF
  _BYTE v49[12]; // [esp+BCh] [ebp-168h] BYREF
  int v50; // [esp+C8h] [ebp-15Ch]
  int v51; // [esp+CCh] [ebp-158h]
  int v52; // [esp+D0h] [ebp-154h]
  int v53; // [esp+D4h] [ebp-150h]
  int v54; // [esp+D8h] [ebp-14Ch]
  int v55; // [esp+DCh] [ebp-148h]
  _BYTE v56[4]; // [esp+E0h] [ebp-144h] BYREF
  _BYTE v57[12]; // [esp+E4h] [ebp-140h] BYREF
  int v58; // [esp+F0h] [ebp-134h]
  int v59; // [esp+F4h] [ebp-130h]
  int v60; // [esp+F8h] [ebp-12Ch]
  int v61; // [esp+FCh] [ebp-128h]
  int v62; // [esp+100h] [ebp-124h]
  int v63; // [esp+104h] [ebp-120h]
  float v64[16]; // [esp+108h] [ebp-11Ch] BYREF
  float **v65; // [esp+148h] [ebp-DCh]
  float v66[16]; // [esp+170h] [ebp-B4h] BYREF
  _BYTE v67[64]; // [esp+1B0h] [ebp-74h] BYREF
  float **v68; // [esp+1F0h] [ebp-34h]
  int v69; // [esp+220h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+224h] [ebp+0h]

  Actor::Tick((Actor *)this);
  for ( i = *this[296]; i != (float *)this[296]; i = *(float **)i )
  {
    sub_1000DF7B((int)&v43, (int)(i + 2));
    v3 = v43;
    v4 = this[286];
    if ( v43 == 0.0 || (float ***)LODWORD(v43) != this + 285 )
      _invalid_parameter_noinfo();
    if ( (float **)v44 != v4 )
    {
      if ( v3 == 0.0 )
        _invalid_parameter_noinfo();
      if ( v44 == *(_DWORD *)(LODWORD(v3) + 4) )
        _invalid_parameter_noinfo();
      v5 = *(_DWORD *)(v44 + 36);
      if ( v5 )
      {
        if ( i == (float *)this[296] )
          _invalid_parameter_noinfo();
        *(float *)&rc.left = GDeltaTime * i[9];
        *(float *)&rc.top = i[10] * GDeltaTime;
        *(float *)&rc.right = GDeltaTime * i[11];
        memset(v66, 0, sizeof(v66));
        sub_102C1270(1.0);
        v66[15] = 1.0;
        sub_102C26D0(*(float *)&rc.left, *(float *)&rc.top, *(float *)&rc.right);
        memset(v64, 0, sizeof(v64));
        sub_102C1270(1.0);
        v64[15] = 1.0;
        sub_102C2120(v66, v5 + 292, v64);
        qmemcpy((void *)(v5 + 292), v64, 0x40u);
      }
    }
    if ( i == (float *)this[296] )
      _invalid_parameter_noinfo();
  }
  if ( *((float *)this + 279) >= 0.0 )
  {
    v40 = *((float *)this + 280) + GDeltaTime;
    *((float *)this + 280) = v40;
    if ( *((float *)this + 279) < (double)v40 )
    {
      CollisionInfo::CollisionInfo((CollisionInfo *)v64);
      *(float *)&v41 = *((float *)this + 214) + 0.0;
      v6 = *((float *)this + 215) + 1000.0;
      v69 = 0;
      *(float *)&v46 = v6;
      v43 = *((float *)this + 216) + 0.0;
      rc.left = v41;
      rc.top = v46;
      *(float *)&rc.right = v43;
      v7 = NxPhysics::Instance(this + 214, &rc, 1, v64, 16);
      NxPhysics::RayCast(v7);
      v8 = v65;
      if ( v65 != this[278] )
      {
        v9 = *((_BYTE *)this + 421) == 0;
        this[278] = v65;
        if ( !v9 && v8 && (unsigned __int8)std::operator==<char>(this + 111, "local") )
        {
          v10 = EventAttemper::Instance(9, 4430);
          v11 = EventAttemper::AddEvent(v10);
          v12 = (Event *)v11;
          LOBYTE(v11) = *((_BYTE *)this + 421) && this[278];
          v34 = v11;
          Event::GetStream(v12);
          sub_100193C1(v34);
          sub_100157D5(v38);
          v39 = sub_1000298C(&v47.top);
          Event::GetStream(v12);
          sub_100193C1(v39);
          LOBYTE(retaddr) = 0;
          std::string::~string(&v47.top);
          StaticModel::GetWorldBBox(this[278][179], v49);
          v35 = v55;
          LOBYTE(v69) = 2;
          v32 = v54;
          v30 = v53;
          v26 = v52;
          v24 = v51;
          v22 = v50;
          Event::GetStream(v12);
          sub_10005BD2(v22);
          sub_10005BD2(v24);
          sub_10005BD2(v26);
          sub_10005BD2(v30);
          sub_10005BD2(v32);
          sub_10005BD2(v35);
          sub_1001518B(&rc);
          v27 = rc;
          Event::GetStream(v12);
          sub_1001A0C3(v27.left);
          sub_1001A0C3(v27.top);
          sub_1001A0C3(v27.right);
          sub_1001A0C3(v27.bottom);
          LOBYTE(v69) = 0;
          sub_102C0750(v48);
        }
      }
      *((float *)this + 280) = 0.0;
      v69 = -1;
      CollisionInfo::~CollisionInfo((CollisionInfo *)v64);
    }
  }
  if ( *((float *)this + 282) >= 0.0 )
  {
    v43 = *((float *)this + 283) + GDeltaTime;
    v13 = v43;
    *((float *)this + 283) = v43;
    if ( *((float *)this + 282) < v13 )
    {
      CollisionInfo::CollisionInfo((CollisionInfo *)v67);
      v43 = *((float *)this + 214) + 0.0;
      v14 = *((float *)this + 215) + 1000.0;
      v69 = 3;
      *(float *)&v46 = v14;
      *(float *)&v42 = *((float *)this + 216) + 0.0;
      *(float *)&rc.left = v43;
      rc.top = v46;
      rc.right = v42;
      v15 = NxPhysics::Instance(this + 214, &rc, 1, v67, 66);
      NxPhysics::RayCast(v15);
      v16 = v68;
      *((float *)this + 283) = 0.0;
      if ( this[281] != v16 )
      {
        this[281] = v16;
        if ( v16 )
        {
          *((_BYTE *)this + 421) = *((_BYTE *)v16 + 421);
          *((_BYTE *)this + 422) = *((_BYTE *)v16 + 422);
          *((_BYTE *)this + 308) = *((_BYTE *)v16 + 308);
          v17 = EventAttemper::Instance(9, 4430);
          v18 = (Event *)EventAttemper::AddEvent(v17);
          v19 = *((_BYTE *)this + 421) && this[278];
          v36 = v19;
          Event::GetStream(v18);
          sub_100193C1((int)(this + 111));
          sub_100157D5(v36);
          if ( *((_BYTE *)this + 421) && this[278] )
          {
            sub_1000298C(v48);
            LOBYTE(v69) = 4;
            Event::GetStream(v18);
            sub_100193C1(v38);
            LOBYTE(retaddr) = 3;
            std::string::~string(v49);
            StaticModel::GetWorldBBox(this[278][179], v57);
            v37 = v63;
            LOBYTE(v69) = 5;
            v33 = v62;
            v31 = v61;
            v28 = v60;
            v25 = v59;
            v23 = v58;
            Event::GetStream(v18);
            sub_10005BD2(v23);
            sub_10005BD2(v25);
            sub_10005BD2(v28);
            sub_10005BD2(v31);
            sub_10005BD2(v33);
            sub_10005BD2(v37);
            sub_1001518B(&v47);
            v29 = v47;
            Event::GetStream(v18);
            sub_1001A0C3(v29.left);
            sub_1001A0C3(v29.top);
            sub_1001A0C3(v29.right);
            sub_1001A0C3(v29.bottom);
            LOBYTE(v69) = 3;
            sub_102C0750(v56);
          }
        }
        else
        {
          *((_BYTE *)this + 421) = 0;
          *((_BYTE *)this + 422) = 1;
          *((_BYTE *)this + 308) = 0;
          v20 = EventAttemper::Instance(9, 4430);
          v21 = (Event *)EventAttemper::AddEvent(v20);
          Event::GetStream(v21);
          sub_100193C1(COERCE_INT(0.0));
          sub_100157D5(0);
        }
      }
      v69 = -1;
      CollisionInfo::~CollisionInfo((CollisionInfo *)v67);
    }
  }
}
