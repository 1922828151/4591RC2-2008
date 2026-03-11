/*
 * func-name: ?StatusUIEvent@CStatusUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x1028c940
 * callers: 0x10004e6c
 * callees: 0x1000156e, 0x102c9d98, 0x102c9ea8
 */

void __stdcall CStatusUI::StatusUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  EventAttemper *v9; // eax
  _DWORD *v10; // eax
  EventAttemper *v11; // eax
  _DWORD *v12; // eax
  EventAttemper *v13; // eax
  _DWORD *v14; // eax
  EventAttemper *v15; // eax
  _DWORD *v16; // eax
  EventAttemper *v17; // eax
  _DWORD *v18; // eax
  EventAttemper *v19; // eax
  _DWORD *v20; // eax
  EventAttemper *v21; // eax
  _DWORD *v22; // eax
  EventAttemper *v23; // eax
  EventAttemper *v24; // eax
  EventAttemper *v25; // eax
  EventAttemper *v26; // eax
  EventAttemper *v27; // eax
  EventAttemper *v28; // eax
  EventAttemper *v29; // eax
  EventAttemper *v30; // eax
  EventAttemper *v31; // eax

  v6 = (_DWORD *)_RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CStatusUI `RTTI Type Descriptor');
  v7 = v6;
  if ( v6 && a2 == 24 )
  {
    if ( a5 )
    {
      v8 = operator new(4u);
      if ( v8 )
        *v8 = &SystemPartChangeObserver::`vftable';
      v9 = (EventAttemper *)EventAttemper::Instance(9, 4150);
      v7[1013] = EventAttemper::AddObserver(v9);
      v10 = operator new(4u);
      if ( v10 )
        *v10 = &RobotWeaponObserver::`vftable';
      v11 = (EventAttemper *)EventAttemper::Instance(9, 4151);
      v7[1014] = EventAttemper::AddObserver(v11);
      v12 = operator new(4u);
      if ( v12 )
        *v12 = &BuffAddedObserver::`vftable';
      v13 = (EventAttemper *)EventAttemper::Instance(9, 4152);
      v7[1015] = EventAttemper::AddObserver(v13);
      v14 = operator new(4u);
      if ( v14 )
        *v14 = &BuffRemovedObserver::`vftable';
      v15 = (EventAttemper *)EventAttemper::Instance(9, 4153);
      v7[1016] = EventAttemper::AddObserver(v15);
      v16 = operator new(4u);
      if ( v16 )
        *v16 = &UseSkillObserver::`vftable';
      v17 = (EventAttemper *)EventAttemper::Instance(9, 4154);
      v7[1017] = EventAttemper::AddObserver(v17);
      v18 = operator new(4u);
      if ( v18 )
        *v18 = &UseSkillEndObserver::`vftable';
      v19 = (EventAttemper *)EventAttemper::Instance(9, 4155);
      v7[1018] = EventAttemper::AddObserver(v19);
      v20 = operator new(4u);
      if ( v20 )
        *v20 = &EstabStateChangeObserver::`vftable';
      v21 = (EventAttemper *)EventAttemper::Instance(9, 4156);
      v7[1019] = EventAttemper::AddObserver(v21);
      v22 = operator new(4u);
      if ( v22 )
        *v22 = &LocalRobotDestroyObserver::`vftable';
      v23 = (EventAttemper *)EventAttemper::Instance(9, 4157);
      v7[1020] = EventAttemper::AddObserver(v23);
    }
    else
    {
      v6[1004] = 0;
      CStatusUI::Clear((CStatusUI *)v6);
      v24 = (EventAttemper *)EventAttemper::Instance(v7[1013], 1);
      EventAttemper::RemoveObserver(v24);
      v25 = (EventAttemper *)EventAttemper::Instance(v7[1014], 1);
      EventAttemper::RemoveObserver(v25);
      v26 = (EventAttemper *)EventAttemper::Instance(v7[1015], 1);
      EventAttemper::RemoveObserver(v26);
      v27 = (EventAttemper *)EventAttemper::Instance(v7[1016], 1);
      EventAttemper::RemoveObserver(v27);
      v28 = (EventAttemper *)EventAttemper::Instance(v7[1017], 1);
      EventAttemper::RemoveObserver(v28);
      v29 = (EventAttemper *)EventAttemper::Instance(v7[1018], 1);
      EventAttemper::RemoveObserver(v29);
      v30 = (EventAttemper *)EventAttemper::Instance(v7[1019], 1);
      EventAttemper::RemoveObserver(v30);
      v31 = (EventAttemper *)EventAttemper::Instance(v7[1020], 1);
      EventAttemper::RemoveObserver(v31);
      v7[1013] = 0;
      v7[1014] = 0;
      v7[1015] = 0;
      v7[1016] = 0;
      v7[1017] = 0;
      v7[1018] = 0;
      v7[1019] = 0;
    }
  }
}
