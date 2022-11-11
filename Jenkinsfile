pipeline{
    agent any
    stages{
        stage('Clean'){
            sh 'make clean'
        }
        stage('Build'){
            sh 'make code'
        }
    }
}