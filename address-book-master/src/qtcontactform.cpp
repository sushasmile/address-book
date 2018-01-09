#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        cityField(new QLineEdit())
{

    addRow("<font style='color:blue'>First Name</font>", firstNameField);
    addRow("<font style='color:red'>Last Name</font>", lastNameField);
    addRow("<font style='color:green'>Address</font>", addressField);
    addRow("<font style='color:pink'>Phone Number</font>", phoneNumberField);
    addRow("<font style='color:violet'>Email</font>", emailField);
    addRow("<font style='color:grey'>City</font>", cityField);

}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    cityField->setText("");
}
