#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_btn_FS_Local_clicked();
    void on_btn_FS_Go_clicked();
    void on_radio_FS_Upload_clicked();
    void on_radio_FS_Download_clicked();
    void on_radio_FS_Size_clicked();
    void on_radio_FS_HashChecksum_clicked();

    void on_btn_IMG_Local_clicked();

    void on_btn_IMG_Go_clicked();

    private:
    Ui::Form *ui;
};

#endif // FORM_H
