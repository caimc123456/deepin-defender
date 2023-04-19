# 安全中心|deepin-defender|

## 概述

安全中心是一款提供病毒查殺、垃圾清理的應用工具。



## 使用入門

您可以透過以下方式執行或關閉安全中心，或者建立捷徑。

### 執行安全中心

1. 單擊任務欄上的啟動器 ![deepin-launcher](../common/deepin_launcher.svg)，進入啟動器介面。
2. 上下滾動滑鼠滾輪瀏覽或透過搜尋，找到「安全中心」按鈕 ![deepin_defender](../common/deepin_defender.svg)，單擊開啟。彈出授權框，需要輸入系統登錄密碼進行認證。

![0|e_password](fig/e_password.png)

3. 右鍵單擊 ![deepin_defender](../common/deepin_defender.svg)，您可以：
   - 單擊 **建立桌面捷徑**，在桌面建立捷徑。
   - 單擊 **釘選到Dock**，將應用程式固定到Dock。
   - 單擊 **開機啟動**，將應用程式添加到開機啟動項，在電腦開機時自動執行該應用程式。

### 關閉安全中心

- 在安全中心介面，單擊 ![close](../common/close.svg)，關閉安全中心。
- 右鍵單擊任務欄上的 ![deepin_defender](../common/deepin_defender.svg) 圖示，選擇 **全部關閉** 來關閉安全中心。
- 在安全中心介面單擊 ![icon_menu](../common/icon_menu.svg)，選擇 **退出** 來關閉安全中心。

## 操作介紹

### 病毒查殺

#### 病毒掃描

安全中心支持三種病毒掃描方式，分別為全盤掃描、快速掃描和自訂掃描。

1. 在安全中心主界面，選擇左側導航欄的 **病毒查殺**。在病毒查殺界面，根據需求選擇病毒掃描方式，掃描完成後會顯示掃描結果。

   ![0|virus-scan](fig/e_virusscan.png)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

2. 根據掃描結果，可以對每個風險項單獨操作，也可以選擇批量操作。有以下幾個操作項：

   **單項操作**：
   - 修復：單擊修復按鈕 ![repair](../common/repair.svg) 後，風險項被修復，下次掃描不會被判定為異常。

   - 隔離：單擊隔離按鈕 ![isolation](../common/isolation.svg) 後，風險項被隔離，隔離後不會影響其他文件，下次掃描不會被判定為異常，可在隔離區查看。

   - 信任：單擊信任按鈕 ![trust](../common/trust.svg) 後，風險項被信任，下次掃描不會被判定為異常，可在信任區查看。

   **批次操作**：
   
   勾選需要處理的風險項後，在頁面底部的下拉框中選擇 **立即修復**、**立即隔離** 或 **添加信任** 選項後，單擊 **執行**，則可以批次處理風險項。

   ![0|virus-result](fig/e_virusresult.png)

#### 隔離區

在病毒查殺界面，單擊 **隔離區**，可查看隔離文件列表，還可以選擇將文件移出隔離。

![0|quarantine-area](fig/quarantinearea.png)

#### 信任區

在病毒查殺界面，單擊 **信任區**，可查看信任文件列表，還可以選擇將文件移出信任。

![0|trust-area](fig/trustarea.png)

#### 查殺日誌

在病毒查殺界面，單擊 **查殺日誌**，可查看每次病毒掃描的時間、掃描類型及結果。單擊詳情按鈕 ![icon-details](../common/icon_details.svg)，可查看日誌詳情，還可以選擇刪除日誌。

![0|log](fig/log.png)

#### 病毒庫更新

每天都有新病毒產生，所以要定期更新病毒庫，以滿足計算機的安全需求。

在病毒查殺介面，如果有新的病毒庫，在介面右下角單擊 **有更新** 後，您可以選擇是否更新病毒庫。

### 垃圾清理

 作業系統在日常執行中會產生各種垃圾，當垃圾越來越多，會影響系統的執行效率，浪費磁碟資源。建議定期清理垃圾，保障系統執行流暢，提升資源利用率。

1. 打開安全中心，選擇左側導航欄的 **垃圾清理**，進入垃圾清理介面。
2. 勾選對應的垃圾類型，目前可以選擇清理系統垃圾、應用垃圾、痕跡訊息和Cookies。
3. 單擊 **立即掃描**，進入掃描介面。
4. 掃描完成後，可查看掃描發現的垃圾，並進行相應的處理。
   
   - 立即清理：清理所有選中的垃圾，您還可以自行取消勾選或者增加勾選。
   - 返回：不做任何處理，返回到垃圾清理介面。

5. 清理完成後單擊 **完成** 即可，清理過程中還可以單擊 **取消清理**。

![0|garbage_cleaning](fig/e_cleanup.png)




## 主選單

在主選單中，您可以進行相關參數設定、切換視窗主題，查看說明手冊等操作。

### 設定

在安全中心介面，單擊 ![icon_menu](../common/icon_menu.svg)，選擇 **設定** ，您可以進行基礎設定及安全設定。

#### 基礎設定

**病毒查殺**

   - 加入「病毒查殺」到文件右鍵選單：勾選後，單擊文件（夾）右鍵可直接選擇 **病毒查殺**。
   - 不掃描超過此大小的壓縮包：勾選後，若壓縮包超過設定的大小，則不會進行掃描。
   - 病毒庫升級地址：勾選後，可設定病毒庫升級地址。

**殺毒引擎**

可以選擇瑞星網安或安恆訊息殺毒引擎。

**關閉主視窗**

   - 選擇 **最小化至系統列**，關閉主視窗時，應用將隱藏到系統工具列。
   - 選擇 **退出**，關閉主視窗時直接退出應用。
   - 選擇**每次詢問**，每次關閉主視窗時會彈出確認彈框。

#### 還原預設值

單擊 **還原預設值** ，可復原目前頁面為預設設定值。

![0|e_settings](fig/e_settings.png)


### 主題

視窗主題包含亮色主題、暗色主題和系統主題。

1. 在安全中心介面，單擊 ![icon_menu](../common/icon_menu.svg)。
2. 選擇 **主題**，選擇一個主題顏色。

### 說明

查看說明手冊，透過幫助進一步了解和使用安全中心。

1. 在安全中心介面，單擊 ![icon_menu](../common/icon_menu.svg)。
2. 選擇 **說明**，查看安全中心的說明手冊，進一步了解和使用安全中心。。


### 關於

1. 在安全中心介面，單擊 ![icon_menu](../common/icon_menu.svg)。
2. 選擇 **關於**，查看安全中心的版本和介紹。

### 退出

1. 在安全中心介面，單擊 ![icon_menu](../common/icon_menu.svg)。
2. 選擇 **退出**。