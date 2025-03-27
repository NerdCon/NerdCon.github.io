/* 전체 컨테이너 */
.PC {
    display: flex;
    flex-direction: column;
    align-items: center;
    position: relative;
    background-color: var(--graywhite);
  }
  
  /* 공통 프레임 */
  .PC .frame {
    display: flex;
    flex-direction: column;
    align-items: center;
    width: 100%;
    position: relative;
    flex: 0 0 auto;
  }
  
  /* 메인 콘텐츠 영역 */
  .PC .div {
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: 20px;
    padding: 0 0 80px;  /* PC: 120px → 모바일: 80px */
    width: 100%;
    background-color: #010101;
    position: relative;
    flex: 0 0 auto;
  }
  
  /* 텍스트 색상은 그대로 유지 */
  .main {
    color: white;
  }
  
  /* 하단 및 좌측 고정 요소 */
  .PC .vector2 {
    position: absolute;
    bottom: 0;
    left: 0;
  }
  
  .PC .union {
    position: absolute;
    /* PC는 top:600px; 모바일에서는 위치를 낮추어 보정 */
    top: 200px;
    right: 0;
  }
  
  /* 헤더 – .frame-2 */
  .PC .frame-2 {
    display: flex;
    align-items: flex-end;
    justify-content: space-between;
    padding: 30px 20px 20px; /* PC: 30px 40px 20px */
    width: 100%;
    position: relative;
    flex: 0 0 auto;
  }
  
  /* 로고 */
  .PC .LOGO-white {
    position: relative;
    /* PC: 136×28 → 모바일: 약 120×25 */
    width: 120px;
    height: 25px;
  }
  
  /* 로고 하위 이미지 – 필요 시 축소 */
  .PC .img {
    position: absolute;
    width: 85px;
    height: 11px;
    top: 10px;
    left: 30px;
  }
  
  /* 심볼 */
  .PC .symbol-white {
    position: absolute;
    width: 28px;
    height: 25px;
    top: 0;
    left: 0;
  }
  
  /* 내비게이션 메뉴 (.frame-3) */
  .PC .frame-3 {
    display: inline-flex;
    align-items: center;
    gap: 16px; /* PC: 36px → 모바일: 16px */
    position: relative;
    flex: 0 0 auto;
  }
  
  /* 메뉴 텍스트 */
  .PC .text-wrapper {
    position: relative;
    margin-top: -1px;
    font-family: var(--headline-17-b-font-family);
    font-weight: var(--headline-17-b-font-weight);
    color: var(--graywhite);
    /* PC 폰트 크기(예: 60px) 대비 모바일는 약 32px ~ 36px */
    font-size: 32px;
    text-align: center;
    letter-spacing: var(--headline-17-b-letter-spacing);
    line-height: 1.2;
    white-space: nowrap;
    font-style: var(--headline-17-b-font-style);
  }
  
  /* 메인 타이틀 영역 (.frame-4) */
  .PC .frame-4 {
    display: inline-flex;
    flex-direction: column;
    align-items: center;
    gap: 40px; /* PC: 60px → 모바일: 40px */
    padding: 0 20px;
    width: 100%;
    position: relative;
    flex: 0 0 auto;
  }
  
  /* 그룹 이미지 (원형 등) – PC .group */
  .PC .group {
    position: relative;
    /* PC: 430×430 → 모바일: 축소된 크기 (예: 260×260) */
    width: 260px;
    height: 260px;
  }
  
  /* 단계별 안내 영역 (.frame-5) */
  .PC .frame-5 {
    display: inline-flex;
    flex-direction: column;
    align-items: center;
    gap: 40px;  /* PC: 40px 혹은 40~60px → 모바일: 40px로 동일하게 */
    position: relative;
    flex: 0 0 auto;
    width: 100%;
  }
  
  /* 기타 콘텐츠 영역 (.frame-6, .frame-7) */
  .PC .frame-6 {
    display: inline-flex;
    flex-direction: column;
    align-items: center;
    gap: 20px;  /* 축소 */
    width: 100%;
    position: relative;
    flex: 0 0 auto;
  }
  .PC .frame-7 {
    display: inline-flex;
    flex-direction: column;
    align-items: center;
    gap: 20px;
    width: 100%;
    position: relative;
    flex: 0 0 auto;
  }
  
  /* 타이틀 텍스트 – .b, .text-wrapper-2, .b-2 */
  .PC .b {
    position: relative;
    margin-top: -1px;
    font-family: "Gmarket Sans TTF-Bold", Helvetica;
    font-weight: 700;
    color: #585a69;
    /* PC: 60px → 모바일: 약 40px */
    font-size: 40px;
    text-align: right;
    line-height: 1.2;
    white-space: nowrap;
  }
  .PC .text-wrapper-2 {
    position: relative;
    margin-top: -1px;
    font-family: "Gmarket Sans TTF-Bold", Helvetica;
    font-weight: 700;
    color: var(--graywhite);
    /* PC: 60px → 모바일: 약 40px~44px */
    font-size: 44px;
    text-align: center;
    white-space: nowrap;
  }
  .PC .b-2 {
    position: relative;
    margin-top: -1px;
    font-family: "Gmarket Sans TTF-Bold", Helvetica;
    font-weight: 700;
    color: #585a69;
    font-size: 40px;
    white-space: nowrap;
  }
  
  /* 서브 텍스트 영역 – .frame-8, .text-wrapper-3, .ellipse, .p */
  .PC .frame-8 {
    display: inline-flex;
    align-items: center;
    justify-content: center;
    gap: 10px;
    width: 100%;
    position: relative;
    flex: 0 0 auto;
  }
  .PC .text-wrapper-3 {
    position: relative;
    margin-top: -1px;
    font-family: "Pretendard", Helvetica;
    font-weight: 600;
    color: var(--graywhite);
    /* PC에서 20px → 모바일: 약 18px */
    font-size: 18px;
    text-align: center;
    white-space: nowrap;
  }
  .PC .ellipse {
    position: relative;
    width: 4px;
    height: 4px;
    background-color: var(--graygy-600);
    border-radius: 2px;
  }
  .PC .p {
    position: relative;
    font-family: "Pretendard", Helvetica;
    font-weight: 400;
    color: var(--graygy-500);
    /* PC 16px → 모바일: 14px */
    font-size: 14px;
    text-align: center;
  }
  
  /* 안내 박스 – .div-wrapper */
  .PC .div-wrapper {
    display: flex;
    flex-direction: column;
    width: 320px;
    align-items: center;
    justify-content: center;
    gap: 20px;
    padding: 20px 0;
    background-color: #6131f0;
    border-radius: 12px;
    box-shadow: 0px 8px 0px #330da3;
    position: relative;
    flex: 0 0 auto;
  }
  
  /* 안내 박스 타이틀 – .text-wrapper-4 */
  .PC .text-wrapper-4 {
    position: relative;
    margin-top: -1px;
    font-family: var(--title-26-b-font-family);
    font-weight: var(--title-26-b-font-weight);
    color: var(--graywhite);
    /* PC 폰트 크기에 비해 모바일은 약 32px */
    font-size: 32px;
    white-space: nowrap;
  }
  
  /* 섹션 컨테이너 – .frame-9 */
  .PC .frame-9 {
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: 60px;
    padding: 80px 0;
    width: 100%;
    background-color: #1c1d24;
    position: relative;
    flex: 0 0 auto;
  }
  
  /* (하단 안내 관련) 섹션 내 안내 텍스트 – .text-wrapper-5, .text-wrapper-6 */
  .PC .text-wrapper-5 {
    position: relative;
    margin-top: -1px;
    font-family: "Gmarket Sans TTF-Bold", Helvetica;
    font-weight: 700;
    color: var(--graywhite);
    /* PC: 50px → 모바일: 약 36px */
    font-size: 36px;
    text-align: center;
    white-space: nowrap;
  }
  .PC .text-wrapper-6 {
    position: relative;
    font-family: var(--body-15-r-font-family);
    font-weight: var(--body-15-r-font-weight);
    color: #6f6f76;
    /* PC: 18px → 모바일: 약 16px */
    font-size: 16px;
    text-align: center;
    white-space: nowrap;
  }
  
  /* 섹션 내 파트너 안내 – .frame-11, .frame-12 등 */
  .PC .frame-11 {
    display: flex;
    flex-direction: column;
    gap: 30px;
    padding: 40px 20px;
    width: 100%;
    background-color: #1d1e25;
    position: relative;
    flex: 0 0 auto;
  }
  .PC .frame-12 {
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: 40px;
    width: 100%;
    position: relative;
  }
  
  /* (번호와 세션) .frame-17 ~ .frame-19, .line 등 */
  .PC .frame-17 {
    display: flex;
    flex-direction: column;
    align-items: flex-start;
    gap: 60px; /* PC: 80px → 모바일: 60px */
    position: relative;
    flex: 0 0 auto;
  }
  .PC .frame-18 {
    display: flex;
    align-items: center;
    gap: 40px; /* PC: 60px → 모바일: 40px */
    width: 100%;
    position: relative;
  }
  .PC .frame-19 {
    width: 30px;
    height: 30px;
    background-color: #000;
    color: #fff;
    border-radius: 50%;
    display: flex;
    justify-content: center;
    align-items: center;
    position: relative;
    z-index: 2;
  }
  .PC .line {
    position: absolute;
    left: 15px;   /* 번호 원의 중심에 맞춤 */
    top: 15px;    /* 첫 번째 번호 중심에서 시작 */
    width: 1px;
    height: calc(100% - 15px);
    background-color: var(--graygy-300);
    z-index: 1;
  }
  .PC .text-wrapper-12 {
    position: relative;
    margin-top: -1px;
    font-family: var(--headline-18-b-font-family);
    font-weight: var(--headline-18-b-font-weight);
    color: var(--graywhite);
    /* PC: 24px → 모바일: 그대로 24px 혹은 약간 축소 */
    font-size: 24px;
    text-align: center;
    white-space: nowrap;
  }
  
  /* 세션 상세 설명 – .frame-20, .frame-21, .text-wrapper-13, .rectangle-5, .frame-22, .ellipse-3, .frame-23, .text-wrapper-14, .text-wrapper-15 */
  .PC .frame-20 {
    display: flex;
    flex-direction: column;
    align-items: flex-start;
    gap: 20px;
    position: relative;
    flex: 0 0 auto;
  }
  .PC .frame-21 {
    display: flex;
    align-items: center;
    gap: 12px;
    position: relative;
    flex: 0 0 auto;
  }
  .PC .text-wrapper-13 {
    position: relative;
    margin-top: -1px;
    font-family: var(--title-22-b-font-family);
    font-weight: var(--title-22-b-font-weight);
    color: var(--graygy-900);
    /* PC:  ? → 모바일: 약 18px */
    font-size: 18px;
    white-space: nowrap;
  }
  .PC .rectangle-5 {
    position: relative;
    width: 1px;
    height: 14px;
    background-color: var(--graygy-400);
  }
  .PC .frame-22 {
    display: flex;
    align-items: center;
    gap: 16px;
    width: 100%;
    position: relative;
    flex: 0 0 auto;
  }
  .PC .ellipse-3 {
    position: relative;
    width: 40px;  /* PC: 50px → 모바일: 40px */
    height: 40px;
    border-radius: 50%;
  }
  .PC .frame-23 {
    display: flex;
    flex-direction: column;
    align-items: flex-start;
    gap: 2px;
    position: relative;
    flex: 0 0 auto;
  }
  .PC .text-wrapper-14 {
    position: relative;
    margin-top: -1px;
    font-family: var(--body-15-SB-font-family);
    font-weight: var(--body-15-SB-font-weight);
    color: var(--graygy-800);
    font-size: 16px;
    white-space: nowrap;
  }
  .PC .text-wrapper-15 {
    position: relative;
    font-family: var(--body-15-r-font-family);
    font-weight: var(--body-15-r-font-weight);
    color: var(--graygy-800);
    font-size: 16px;
    white-space: nowrap;
  }
  
  /* 하단 LOCATION 영역 – .frame-28 ~ .frame-30 */
  .PC .frame-28 {
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: 40px;
    padding: 80px 0;
    width: 100%;
    background-color: #111216;
    position: relative;
    flex: 0 0 auto;
  }
  .PC .frame-29 {
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: 20px;
    width: 100%;
    position: relative;
    flex: 0 0 auto;
  }
  .PC .rectangle-6 {
    position: relative;
    max-width: 640px;
    width: 100%;
  }
  .PC .frame-30 {
    display: flex;
    flex-direction: column;
    align-items: flex-start;
    gap: 20px;
    width: 100%;
    padding: 0 20px;
    box-sizing: border-box;
  }
  
  /* LOCATION 텍스트 – .text-wrapper-17, .text-wrapper-18, .text-wrapper-19 */
  .PC .text-wrapper-17 {
    position: relative;
    font-family: "Pretendard-Bold", Helvetica;
    font-weight: 700;
    color: var(--graywhite);
    font-size: 28px;
    white-space: nowrap;
  }
  .PC .text-wrapper-18 {
    position: relative;
    font-family: "Pretendard-Bold", Helvetica;
    font-weight: 700;
    color: var(--graywhite);
    font-size: 24px;
    white-space: nowrap;
  }
  .PC .text-wrapper-19 {
    position: relative;
    font-family: "Pretendard-Bold", Helvetica;
    font-weight: 700;
    color: var(--graywhite);
    font-size: 20px;
    white-space: nowrap;
  }
  
  /* 하단 푸터 영역 – .frame-34, .frame-35 */
  .PC .frame-34 {
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: 40px;
    padding: 60px 20px;
    width: 100%;
    background-color: var(--graywhite);
    position: relative;
    flex: 0 0 auto;
  }
  .PC .frame-35 {
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: 40px;
    padding: 40px 0;
    width: 100%;
    background-color: var(--graygy-100);
    border-radius: 12px;
    position: relative;
    flex: 0 0 auto;
  }
   
  .PC .AVISS {
    position: absolute;
    width: 106px;
    height: 27px;
    top: 7px;
    left: 50px;
  }
  .PC .hanbit-logo {
    position: relative;
    width: 190px;
    height: 31px;
    object-fit: cover;
  }
  .PC .image {
    position: relative;
    width: 60px;
    height: 60px;
    object-fit: cover;
  }
  